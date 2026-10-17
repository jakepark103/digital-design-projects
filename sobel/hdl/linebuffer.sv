`default_nettype none
// Simple Dual-port BRAM access to to buffer / cache pixels locally
// Inspired by:
// https://raw.githubusercontent.com/KastnerRG/pp4fpgas/gh-pages/main.pdf
// https://projectf.io/posts/framebuffers/
// https://zipcpu.com/tutorial/lsn-08-memory.pdf
module line_buffer 
#(parameter WIDTH = 8,
  parameter LINE_LEN = 128,
  parameter ADDR_WIDTH = 7)
( input logic clock,
  input logic reset_n,
  input logic rw_en,
  input logic [WIDTH-1:0] din,
  output logic [WIDTH-1:0] dout
);
  
  logic [ADDR_WIDTH-1:0] ptr_reg;

  // instantiate bram module
  simple_dual_port_ram bram 
  (.clock,
   .en_a(rw_en), 
   .en_b(rw_en),
   .addr_a(ptr_reg),
   .addr_b(ptr_reg),
   .din,
   .dout);

  always_ff @(posedge clock) begin
    if (~reset_n) begin
      ptr_reg <= '0;
    end else if (rw_en) begin
      // just to make verilator shut up
      if (8'(ptr_reg) == LINE_LEN-1) begin
        ptr_reg <= '0;
      end else begin
        ptr_reg <= ptr_reg + 1'b1;
      end
    end
  end

endmodule : line_buffer