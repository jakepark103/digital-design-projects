`default_nettype none

module uart_tb ();
  
  logic clock, reset_n;
  // tx stuff
  logic tx_valid; 
  logic [7:0] tx_byte;
  logic tx_active, tx_serial, tx_done;
  // rx stuff
  logic rx_serial;
  logic [7:0] rx_byte;
  logic rx_valid, rx_active;

  // initialize DUTs
  uartRX uart_rx (.*);
  uartTX uart_tx (.*);

  // clock signal generator
  initial begin
    clock = 1'b0;
    forever #5 clock = ~clock; // place $finish somewhere else
  end

  // send a byte between uart_rx and uart_tx
  // have these connect together
  assign rx_serial = tx_serial;
  // create a byte
  logic [7:0] test_byte;
  initial begin
    // initiate a reset, start both
    reset_n  = 1'b0;
    tx_valid = 1'b0;
    tx_byte  = 8'h00;

    repeat (10) @(posedge clock);
    reset_n <= 1'b1;
    $display("Reset released, both modules in IDLE");
    // wait until TX is active high (ready to send)
    repeat (5) @(posedge clock);
    // send an A byte
    @(posedge clock);
    tx_byte  <= 8'h41;
    tx_valid <= 1'b1;
    @(posedge clock);
    tx_valid <= 1'b0;
    // GEMINI SECTION
    // Wait for RX to catch and decode the byte
    @(posedge rx_valid);
    if (rx_byte == 8'h41) begin
      $display("Pass Received Byte 1: 0x%02X", rx_byte);
    end else begin
      $display("Oops! Got 0x%02X", rx_byte);
    end

    // Wait for TX to finish stop bit and return to IDLE
    @(posedge tx_done);
    repeat (5) @(posedge clock);

    // send an null byte
    @(posedge clock);
    tx_byte  <= 8'h00;
    tx_valid <= 1'b1;
    @(posedge clock);
    tx_valid <= 1'b0;
    // GEMINI SECTION
    // Wait for RX to catch and decode the byte
    @(posedge rx_valid);
    if (rx_byte == 8'h00) begin
      $display("Pass Received Byte 1: 0x%02X", rx_byte);
    end else begin
      $display("Oops! Got 0x%02X", rx_byte);
    end

    // Wait for TX to finish stop bit and return to IDLE
    @(posedge tx_done);
    repeat (5) @(posedge clock);
    
    $display ("All tests finished!");
    repeat (5) @(posedge clock);
    $finish;
  end


endmodule : uart_tb