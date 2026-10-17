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
  logic [11:0] avg;
  
  logic [11:0] p0_ext, p1_ext, p2_ext,
               p3_ext, p4_ext, p5_ext,
               p6_ext, p7_ext, p8_ext; 


  // assign the extended coordinate values
  always_comb begin
    p0_ext = {4'b0, p0};
    p1_ext = {4'b0, p1};
    p2_ext = {4'b0, p2};

    p3_ext = {4'b0, p3};
    p4_ext = {4'b0, p4};
    p5_ext = {4'b0, p5};

    p6_ext = {4'b0, p6};
    p7_ext = {4'b0, p7};
    p8_ext = {4'b0, p8};

    // Apply blur combinationally without division operation
    // apply matrix operation to a pixel
    // truncate to match the output bit width

    sum = (p0_ext + (p1_ext << 1) + p2_ext 
                + (p3_ext << 1) + (p4_ext << 2) + (p5_ext << 1) 
                + p6_ext + (p7_ext << 1) + p8_ext);
    avg = (sum >> 4); // divide by 16
    p_blur_out = avg [WIDTH-1:0];
  end
  
endmodule : gaussian_blur