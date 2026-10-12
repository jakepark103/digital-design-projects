//`default_nettype none

module ChipInterface (
    input  logic       CLK100MHZ,
    input  logic       btnC,
    input  logic       RsRx,
    output logic       RsTx,
    output logic [1:0] LED
);

    // btnC is active-high on Basys 3; invert for active-low module reset
    logic reset_n;
    assign reset_n = ~btnC;

    // Loopback data and valid strobe
    logic [7:0] loopback_byte;
    logic       loopback_valid;

    uartRX #(
        .CLOCKS_PER_BIT(100),
        .WIDTH(8)
    ) rx_inst (
        .clock     (CLK100MHZ),
        .reset_n   (reset_n),
        .rx_serial (RsRx),
        .rx_byte   (loopback_byte),
        .rx_valid  (loopback_valid),
        .rx_active (LED[0])
    );

    uartTX #(
        .CLOCKS_PER_BIT(100),
        .WIDTH(8)
    ) tx_inst (
        .clock     (CLK100MHZ),
        .reset_n   (reset_n),
        .tx_valid  (loopback_valid),
        .tx_byte   (loopback_byte),
        .tx_serial (RsTx),
        .tx_active (LED[1]),
        .tx_done   ()
    );

endmodule : ChipInterface