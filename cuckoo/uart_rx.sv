`default_nettype none
// module to send data via UART
// UART -> PC
// Using the 100Mhz clock from A7 chip
// one start, one stop, NO parity bit
// BAUDRATE of 1_000_000, but can change to more standard 115_200 
// CLOCKS_PER_BIT = 100MHz / BAUDRATE => 100 cycles
// 8-bit width
// https://nandland.com/uart-serial-port-module/
// https://www.physics.umd.edu/hep/drew/495/serial_communication.html
module uartRX 
#(parameter CLOCKS_PER_BIT=100,
  parameter WIDTH=8)
( input  logic clock,
  input  logic reset_n,
  input  logic rx_serial,
  
  output logic [WIDTH-1:0] rx_byte,
  output logic rx_valid,
  output logic rx_active
);

  // state(s) to use for control path
  enum logic [1:0] {IDLE, START, DATA, STOP} state, next_state;

  // registers, intermediary wires, computation, etc.
  // pretty similar to tx
  logic [6:0] clock_count_reg; // count number of clock cycles (max 100)
  logic [2:0] bit_index_reg;  // count number of bits (max 8) 
  logic [WIDTH-1:0] rx_data_reg; // store the data in register
  logic rx_valid_reg; // register to store if rx is data received is valid
  logic rx_sync_m_reg, rx_sync_reg; // 2 state flip-flop to help solve metastability(?) (nandland)

  // transition and register(s) logic
  always_ff @(posedge clock, negedge reset_n) begin
    if (~reset_n) begin
      clock_count_reg <= 7'd0;
      bit_index_reg <= 3'd0;
      rx_data_reg <= '0;
      rx_valid_reg <= 1'b0;
      // default state
      state <= IDLE; // reset back to idle
    end else begin
      rx_valid_reg <= 1'b0;
      case (state)
        IDLE : begin
          clock_count_reg <= 7'd0;
          bit_index_reg <= 3'd0;
        end
        START : begin
          // use half-period to follow the next state generaiton logic
          if (clock_count_reg == 7'd49) begin
            clock_count_reg <= 7'd0;
          end else begin
            clock_count_reg <= clock_count_reg + 7'd1;
          end
        end
        DATA : begin
          if (clock_count_reg == 7'd99) begin
            // begin counting bits, receiving bits 
            // when clock cycle htis 99 (end of period)
            // place outside of if statement to collect index 7 as well, 
            // also bit_index_reg will save the values 0-7 (hopefullly?)
            rx_data_reg [bit_index_reg] <= rx_sync_reg;
            if (bit_index_reg == 3'd7) begin
              bit_index_reg <= 3'd0;
            end else begin
              bit_index_reg <= bit_index_reg + 3'd1;
            end
            clock_count_reg <= 7'd0;
          end else begin
            clock_count_reg <= clock_count_reg + 7'd1;
          end
        end
        STOP : begin
          if (clock_count_reg == 7'd99) begin
            clock_count_reg <= 7'd0;
            // if the serial bit is held high
            if (rx_sync_reg == 1'b1) begin
              rx_valid_reg <= 1'b1;
            end
          end else begin
            clock_count_reg <= clock_count_reg + 7'd1;
          end
        end
      endcase
      state <= next_state;
    end
  end
  
  // Double-register logic for metastability fixes
  always_ff @(posedge clock, negedge reset_n) begin
    if (~reset_n) begin
      rx_sync_m_reg <= 1'b1;
      rx_sync_reg   <= 1'b1;
    end else begin
      rx_sync_m_reg <= rx_serial;
      rx_sync_reg   <= rx_sync_m_reg;
    end
  end

  // next state generator
  always_comb begin
    next_state = state; // just hold state if any issues (?)
    case (state)
      IDLE : begin
        next_state = IDLE;
        // START signal inferred (held low?)
        if (rx_sync_reg == 1'b0) begin
          next_state = START;
        end
      end
      START : begin
        // check half a period to see if it was some floating issue or actually data being sent
        if (clock_count_reg == 7'd49) begin
          if (rx_sync_reg == 1'b1) begin
            next_state = IDLE;
          end else begin
            next_state = DATA;
          end
        end
      end
      DATA : begin
        if ((clock_count_reg == 7'd99) && 
            (bit_index_reg == 3'd7)) begin
          next_state = STOP;
        end
      end
      STOP : begin
        if (clock_count_reg == 7'd99) begin
          next_state = IDLE;
        end
      end
      default : next_state = IDLE; // just in case (extra)
    endcase
  end


  // output generation
  assign rx_active = (state != IDLE);
  assign rx_byte = rx_data_reg;
  assign rx_valid = rx_valid_reg;
  


endmodule : uartRX
