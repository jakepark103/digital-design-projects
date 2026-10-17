`default_nettype none

// Apply the Sobel operator to the 3x3 square
module sobel_operator
#(parameter WIDTH = 8)
 (input logic [WIDTH-1:0] p0, p1, p2,
                          p3, p4, p5,
                          p6, p7, p8,
  output logic [WIDTH-1:0] p_sobel_out);
  
  // wires for Gx, Gy, and G magnitude
  logic [11:0] Gx_val, Gy_val, 
               Gx_abs, Gy_abs, 
               G_val;
  // need to extend each pixel value to not have overflow / underflow
  // Keep it at 12 bits just to follow the G vals
  logic [11:0] p0_ext, p1_ext, p2_ext,
               p3_ext, p4_ext, p5_ext,
               p6_ext, p7_ext, p8_ext; 

  always_comb begin

    // assign the extended coordinate values
    p0_ext = {4'b0, p0};
    p1_ext = {4'b0, p1};
    p2_ext = {4'b0, p2};

    p3_ext = {4'b0, p3};
    p4_ext = {4'b0, p4};
    p5_ext = {4'b0, p5};

    p6_ext = {4'b0, p6};
    p7_ext = {4'b0, p7};
    p8_ext = {4'b0, p8};

    // calculate Gx
    // After applying convolution to sobelX and og matrix
    // Gx = -p0 + p2 + -2p3 + 2p5 - p6 + p8
    Gx_val = -p0_ext + p2_ext - (p3_ext << 1)
             + (p5_ext << 1) - p6_ext + p8_ext;

    // calculate Gy
    // After applying convolution to sobelY and og matrix
    // Gy = -p0 + -2p1 + -1p2 + p6 + 2p7 + p8
    Gy_val = -p0_ext - (p1_ext << 1) - p2_ext
            + p6_ext + (p7_ext << 1) + p8_ext;

    // get the magnitude of both (just two's complement negate if negative)
    // check msb for sign bit
    Gx_abs = (Gx_val[11]) ? (~Gx_val+1'b1) : Gx_val;
    Gy_abs = (Gy_val[11]) ? (~Gy_val+1'b1) : Gy_val;

    // calculate magnitude G value
    G_val = Gx_abs + Gy_abs;

    // mux to 255 or 0 pixel value based on G
    // if G_val > 100 (let's just )
    p_sobel_out = (G_val > 12'd100) ? 8'd255 : 8'd0;

  end

endmodule : sobel_operator
