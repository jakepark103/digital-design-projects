`default_nettype none

module ChipInterface (
    input  logic       CLK100MHZ, // Pin W5
    input  logic       btnC,      // Pin U18 (Active-high reset button)
    
    // 7-Segment Display
    output logic [6:0] seg,       // Pins W7, W6, U8, V8, U5, V5, U7 (Active-low cathodes)
    output logic       dp,        // Pin V7 (Decimal point, active-low)
    output logic [3:0] an,        // Pins U2, U4, V4, W4 (Active-low anodes)

    // MCP3008 ADC SPI Interface (Pmod JA)
    input  logic       cipo,      // Pin J2 (JA3)
    output logic       copi,      // Pin L2 (JA4)
    output logic       dclk,      // Pin G2 (JA1)
    output logic       cs_n       // Pin J1 (JA2)
);

    logic rst_n;
    assign rst_n = ~btnC;

    // Light decimal point only on digit 1 (active-low: dp=0 when an[1]=0)
    assign dp = (an[1] == 1'b0) ? 1'b0 : 1'b1;

    System system (
        .clk   (CLK100MHZ),
        .rst_n (rst_n),
        .cipo  (cipo),
        .copi  (copi),
        .dclk  (dclk),
        .cs_n  (cs_n),
        .val   (seg),
        .an    (an)
    );

endmodule


module System (
    input  logic       clk,
    input  logic       rst_n,
    
    // SPI Bus
    input  logic       cipo,
    output logic       copi,
    output logic       dclk,
    output logic       cs_n,

    // 7-Segment Outputs
    output logic [6:0] val,
    output logic [3:0] an
);

    logic [15:0] bcd_output;

    // Explicit port binding avoids case & port name mismatch errors
    voltmeter #(
        .COUNT_PERIOD(50_000_000) // 0.5s update rate at 100 MHz
    ) vm_inst (
        .clk     (clk),
        .rst_n   (rst_n),
        .cipo    (cipo),
        .copi    (copi),
        .dclk    (dclk),
        .cs_n    (cs_n),
        .bcd_val (bcd_output)
    );

    SevenSegControl sevensegfull (
        .clk   (clk),
        .rst_n (rst_n),
        .val   (bcd_output),
        .cat   (val),
        .an    (an)
    );

endmodule