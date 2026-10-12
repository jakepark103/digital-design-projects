// Wrapper module for the voltmeter
// Measures voltage from 10-bit MAX3008 ADC
// Gives 7 segment value for voltage
// Only integer values for now, but decimal support may be added later
module voltmeter #(parameter COUNT_PERIOD = 5_000)
(
  input  logic clk, // clock
  input  logic rst_n, // reset low 
  // adc spi stuff
  input  logic cipo, // controller in, peripheral out
  output logic copi, // controller out, peripheral in
  output logic dclk, // data clock
  output logic cs_n, // chip select low
  // output data
  output logic [15:0] bcd_val, // 16 bit bcd val
  output logic [7:0] adc_raw_val, // raw 8 bit voltage value
  output logic  measure_done // indicate when new reading is ready
);

  // state transition wires / conditions
  logic [31:0] delay_counter; // delay to have noticeable changes due to 100Mhz clock
  logic [2:0] sample_counter; // number of samples to take
  // wires for adc interfacing
  logic [7:0] channel0_read_data = 8'b1000_0000; // only use channel 0
  logic [7:0] spi_write_data; // raw adc data
  logic spi_read_data_valid;
  logic trigger;
  // wires for voltage measurment values and math
  logic [10:0] accumulator;
  logic [7:0]  adc_avg;        // accumulator >> 3
  logic [25:0] mult_result;    // (adc_avg * 8486) + 32768 (*GEMINI)
  logic [7:0]  voltage_tenths; // Scaled 0 to 33 tenths of a volt (*GEMINI)
  
  assign mult_result = (adc_avg * 16'd8486) + 26'd32768; // scaling math (GEMINI)
  assign voltage_tenths = mult_result[23:16];

  logic [15:0] term0, term1, term2, term3, term4, term5;
  // translate each bit to support the bcd addition 
  // trying to convert it from binary to bcd-valid digits
  // convert via the bit set
  assign term0 = voltage_tenths[0] ? 16'h0001 : 16'h0000; // 2^0 = 1
  assign term1 = voltage_tenths[1] ? 16'h0002 : 16'h0000; // 2^1 = 2
  assign term2 = voltage_tenths[2] ? 16'h0004 : 16'h0000; // 2^2 = 4
  assign term3 = voltage_tenths[3] ? 16'h0008 : 16'h0000; // 2^3 = 8
  assign term4 = voltage_tenths[4] ? 16'h0016 : 16'h0000; // 2^4 = 16
  assign term5 = voltage_tenths[5] ? 16'h0032 : 16'h0000; // 2^5 = 32
  
  logic [15:0] sum_01, sum_23, sum_45;
  logic [15:0] sum_0123;
  logic [15:0] bcd_voltage_result;
  // add these terms up (split it up)
  BcdAdder16 bcdAdd0 (.A(term0),  .B(term1),  .sum(sum_01));
  BcdAdder16 bcdAdd1 (.A(term2),  .B(term3),  .sum(sum_23));
  BcdAdder16 bcdAdd2 (.A(term4),  .B(term5),  .sum(sum_45));

  BcdAdder16 bcdAdd3 (.A(sum_01), .B(sum_23), .sum(sum_0123));
  BcdAdder16 bcdAdd4 (.A(sum_0123), .B(sum_45), .sum(bcd_voltage_result));

  // wires to convert a number to 7 segment (bcd add lol)
  logic [3:0] bcd_whole, bcd_tenths;
  logic [15:0] bcd_reg; // to store bcd value in register (good convention?)

  // state enum
  enum logic [1:0] {START=2'b00, SAMPLE=2'b01, AVERAGE=2'b10, DONE=2'b11} state, next_state;
  // instantiate spi controller module
  spi_con adc (.clk, .rst_n, 
               .data_in(channel0_read_data), 
               .trigger(trigger), .cipo,
               .data_out(spi_write_data), 
               .data_valid(spi_read_data_valid), 
               .copi, .dclk, .cs_n);

  // take a couple of samples (probably like 5?)
  always_ff @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
      state <= START;
      delay_counter <= 32'b0; // reset delay
      sample_counter <= 3'b0; // reset sampling
      trigger <= 1'b0; // do not start spi transaction
      accumulator <= 11'b0; // set voltage accumulator register to 0
      adc_avg <= 8'd0; // set adc_avg result register to 0
      bcd_reg <= 16'h0;
    end else begin
      case (state)
        START : begin
          accumulator <= 11'b0; // start state
          sample_counter <= 3'b0;
          if (delay_counter == COUNT_PERIOD - 1) begin
            delay_counter <= 32'b0;
            trigger <= 1'b1;
          end else begin
            delay_counter <= delay_counter + 1;
          end
        end
        SAMPLE : begin
          // add in values to a larger value
          // from spi data
          if (spi_read_data_valid) begin
            accumulator <= accumulator + {3'b0, spi_write_data};
            sample_counter <= sample_counter + 1'b1;
            if (sample_counter < 3'd7) begin
              trigger <= 1'b1;
            end
          end
          
        end
        AVERAGE : begin
          adc_avg <= accumulator [10:3];
          trigger <= 1'b0; // no spi transactions
        end
        DONE : begin
          bcd_reg <= bcd_voltage_result;
          trigger <= 1'b0; // no spi transactions
        end
      endcase
      state <= next_state;
    end
  end

  // next state generator
  always_comb begin
    case (state)
      START : next_state = (delay_counter >= COUNT_PERIOD - 1) ? SAMPLE : START;
      SAMPLE : next_state = (spi_read_data_valid && sample_counter == 3'd7) ? AVERAGE : SAMPLE;
      AVERAGE : next_state = DONE;
      DONE : next_state = START;
      default : next_state = START; // default to START if error?
    endcase
  end
  
  // output  (bcd value)
  assign bcd_val = bcd_reg;
  assign adc_raw_val = adc_avg;
  assign measure_done = (state == DONE);

endmodule : voltmeter