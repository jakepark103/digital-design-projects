`default_nettype none

// Given a pixel, get 
// pixels for 3x3 neighbor pixels in a "shifting" buffer,
// Stores the pixel into bram, retrieves it 
// then uses shift register to move pixel by pixel
module process_3x3 
#(parameter WIDTH = 8,
  parameter LINE_LEN = 128,
  parameter ADDR_WIDTH = 7)
( input logic clock,
  input logic reset_n,
  input logic p_valid, // pixel is valid
  input logic [WIDTH-1:0] p_in, // pixel data
  // 
  output logic [WIDTH-1:0] p0, p1, p2,
                           p3, p4, p5,
                           p6, p7, p8
);

  // intermediary wires
  logic [WIDTH-1:0] mid_row_dout;
  logic [WIDTH-1:0] top_row_dout;

  // The total system shifts a pixel from bottom to top, where p_in goes to p9, p9 -> p8, ...
  // middle row bram (one row previously)
  line_buffer #(.WIDTH, .LINE_LEN, .ADDR_WIDTH)
  mid_row_buffer 
  (.clock, 
   .reset_n, 
   .rw_en(p_valid), 
   .din(p_in), 
   .dout(mid_row_dout));
  // top row bram, oldest data (two rows previously)
  line_buffer #(.WIDTH, .LINE_LEN, .ADDR_WIDTH)
  top_row_buffer 
  (.clock, 
   .reset_n, 
   .rw_en(p_valid), 
   .din(mid_row_dout), 
   .dout(top_row_dout));
  // shift register
  always_ff @(posedge clock) begin
    // keep it synchronouse to follow other component resets (timing as well)
    if (~reset_n) begin
      // reset all pixel data
      p0 <= '0; p1 <= '0; p2 <= '0;
      p3 <= '0; p4 <= '0; p5 <= '0;
      p6 <= '0; p7 <= '0; p8 <= '0;
    end else if (p_valid) begin
      // top row shift
      p2 <= top_row_dout; p1 <= p2; p0 <= p1;
      // middle row shift
      p5 <= mid_row_dout; p4 <= p5; p3 <= p4;
      // bottom row shift
      p8 <= p_in; p7 <= p8; p6 <= p7;
    end
  end

endmodule : process_3x3