`default_nettype none
// Generic Simple Dual-Port RAM (Inspired by UG901 Template)
module simple_dual_port_ram 
#(parameter WIDTH = 8,
  parameter LINE_LEN = 128,
  parameter ADDR_WIDTH = 7)
( input logic clock,
  input logic en_a,
  input logic en_b,
  input logic [ADDR_WIDTH-1:0] addr_a,
  input logic [ADDR_WIDTH-1:0] addr_b,
  input logic [WIDTH-1:0] din,
  output logic [WIDTH-1:0] dout 
);
  // force bram usage
  (* ram_style = "block" *)
  logic [WIDTH-1:0] ram [0:LINE_LEN-1];

  // synchronous write
  always_ff @(posedge clock) begin
    if (en_a) begin
      ram[addr_a] <= din;
    end
  end
  // synchronous read
  always_ff @(posedge clock) begin
    if (en_b) begin
      dout <= ram[addr_b];
    end
  end

endmodule : simple_dual_port_ram