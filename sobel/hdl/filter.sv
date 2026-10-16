`default_nettype none
// Processing System for the entire image edge detection algorithm
// Receives a byte in UART, saves it in 3x3 line buffers, then blurs 
// using gaussian blur, then saved again in 3x3 line buffers, 
// then processes it in sobel convolution which sends the final processed byte
// back to whatever code / program is using this hardware. Determining when 
// processing is finished is left to the software.  
module filter_system 
( input logic clock,
  input logic reset_n,
  input logic data_rx,
  output logic data_tx );
  // receiving pixel data
  // receiver valid flag
  logic [7:0] raw_pixel;
  logic rx_valid;

  // raw pixels for 3x3
  logic [7:0] r0, r1, r2, 
              r3, r4, r5, 
              r6, r7, r8;
  // blur output
  logic [7:0] blur_pixel;
  // blurred pixel wires after blur -> sobel in
  logic [7:0] b0, b1, b2, 
              b3, b4, b5, 
              b6, b7, b8;

  // filter-applied pixel and tx valid flag
  logic [7:0] filter_pixel;
  logic valid_delay1, 
        valid_delay2;
  logic tx_valid;

  // need 2 cycle delay for the line buffer's to fully be in memory
  // 1 Cycle has to fill p3x3_0, then another for p3x3_1, then only can we transmit back
  always_ff @(posedge clock) begin
    if (~reset_n) begin // synchronous reset to align with line buffer resets
      valid_delay1 <= 1'b0;
      valid_delay2 <= 1'b0;
    end else begin
      valid_delay1 <= rx_valid;
      valid_delay2 <= valid_delay1;
    end
  end

  // receive data via uart
  uart_rx uartRX (.clock, 
                  .reset_n, 
                  .rx_serial(data_rx),
                  .rx_byte(raw_pixel),
                  .rx_valid,
                  // tie to LED for this when putting to FPGA board
                  .rx_active());
  // line buffer to store 3x3 squares of pixel
  process_3x3 p3x3_0 (.clock,
                      .reset_n,
                      .p_valid(rx_valid),
                      .p_in(raw_pixel),
                      .p0(r0), .p1(r1), .p2(r2),
                      .p3(r3), .p4(r4), .p5(r5),
                      .p6(r6), .p7(r7), .p8(r8));
  // apply gaussian blur
  gaussian_blur gb0 (.p0(r0), .p1(r1), .p2(r2),
                     .p3(r3), .p4(r4), .p5(r5),
                     .p6(r6), .p7(r7), .p8(r8),
                     .p_blur_out(blur_pixel));
  // line buffer those blurred pixels 
  // to get 3x3 square
  process_3x3 p3x3_1 (.clock,
                      .reset_n,
                      .p_valid(valid_delay1),
                      .p_in(blur_pixel),
                      .p0(b0), .p1(b1), .p2(b2),
                      .p3(b3), .p4(b4), .p5(b5),
                      .p6(b6), .p7(b7), .p8(b8));
  // apply sobel
  sobel_operator so0 (.p0(b0), .p1(b1), .p2(b2),
                      .p3(b3), .p4(b4), .p5(b5),
                      .p6(b6), .p7(b7), .p8(b8),
                      .p_sobel_out(filter_pixel));
  
  // set tx_valid to valid_delay2
  assign tx_valid = valid_delay2;

  // stream out the bytes
  uart_tx uartTX (.clock,
                  .reset_n,
                  .tx_valid,
                  .tx_byte(filter_pixel),
                  .tx_serial(data_tx),
                  // tie these to LEDs when FPGA'ing it
                  .tx_active(),
                  .tx_done());

endmodule : filter_system