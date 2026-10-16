// apply gaussian blur
// Apply the Gaussian blur operator to the 3x3 square,
module gaussian_blur 
#(parameter WIDTH = 8)
 (input logic [WIDTH-1:0] p0, p1, p2,
                          p3, p4, p5,
                          p6, p7, p8,
  output logic [WIDTH-1:0] p_blur_out);

  // intermediary wires
  logic [11:0] sum;
  logic [WIDTH-1:0] avg;
  
  // Apply blur combinationally without division operation
  // apply matrix operation to a pixel
  assign sum = (p0 + (p1 << 1) + p2 
                + (p3 << 1) + (p4 << 2) + (p5 << 1) 
                + p6 + (p7 << 1) + p8);
  assign avg = (sum >> 4); // divide by 16
  // truncate to match the output bit width
  assign p_blur_out = avg [WIDTH-1:0];
endmodule : gaussian_blur