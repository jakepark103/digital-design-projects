`default_nettype none
// module to send data via UART
// UART -> PC
// Using the 100Mhz clock from A7 chip
// one start, one stop, NO parity bit
// BAUDRATE of 1_000_000, but can change to more standard 115_200 
// CLOCKS_PER_BIT = 100MHz / BAUDRATE => 100 cycles
// 8-bit width
// https://nandland.com/uart-serial-port-module/
// https://www.physics.umd.edu/hep/drew/495/serial_communication.html
module uartTX
#(parameter CLOCKS_PER_BIT=100,
  parameter WIDTH=8)
( input logic clock,
  input logic reset_n,

  input logic tx_valid,
  input logic [WIDTH-1:0] tx_byte,
  
  output logic tx_active,
  output logic tx_serial,
  output logic tx_done
);

  // state enum definitions
  enum logic [1:0] {IDLE, START, DATA, STOP} state, next_state;
  
  // wires to hold data, do computations, etc.
  logic [6:0] clock_count_reg; // count number of clock cycles (max 100)
  logic [2:0] bit_index_reg;  // count number of bits (max 8) 
  logic [WIDTH-1:0] tx_data_reg; // store the data in register
  logic tx_done_reg; // register to store transaction state

  // Register Logic
  always_ff @(posedge clock, negedge reset_n) begin
    if (~reset_n) begin
      clock_count_reg <= 7'd0;
      bit_index_reg <= 3'd0;
      tx_data_reg <= 'b0;
      tx_done_reg <= 1'b0;
      state <= IDLE; // reset back to idle
    end else begin
      tx_done_reg <= 1'b0; // most cases will assert done reg as low, except DONE
      case (state)
        IDLE : begin 
        // set registers for idle state
          clock_count_reg <= 7'd0;
          bit_index_reg <= 3'd0;
          if (tx_valid) begin
            tx_data_reg <= tx_byte; // store data
          end
        end
        START : begin 
        // set registers for start state
          if (clock_count_reg == 7'd99) begin
            clock_count_reg <= 7'd0;
          end else begin
            clock_count_reg <= clock_count_reg + 7'd1;
          end
        end
        DATA : begin
        // set registers for data state
          // if one full 100 cycles passed
          // reset clock count then count through the bits
          // same idea for bit index
          if (clock_count_reg == 7'd99) begin
            clock_count_reg <= 7'd0;
            if (bit_index_reg == 3'd7) begin
              bit_index_reg <= 3'd0;
            end else begin
              bit_index_reg <= bit_index_reg + 3'd1;
            end
          end else begin
            clock_count_reg <= clock_count_reg + 7'd1;
          end
        end
        STOP : begin
        // set registers for stop state
          if (clock_count_reg == 7'd99) begin
            clock_count_reg <= 7'd0;
            tx_done_reg <= 1'b1;
          end else begin
            clock_count_reg <= clock_count_reg + 7'd1;
          end
        end
      endcase
      // transition to next state
      state <= next_state;
    end
  end

  // Next state generator
  always_comb begin
    // should jsut hold state (no latching)
    next_state = state;
    case (state)
      IDLE : begin
        next_state = IDLE;
        if (tx_valid) begin 
          // only transition if valid is high
          next_state = START;
        end
      end
      START : begin
        // wait a full period to transition
        if (clock_count_reg == 7'd99) begin
          next_state = DATA;
        end
      end
      DATA : begin 
        // wait a full period to transition
        // and also for all the bits to be sent
        if ((clock_count_reg == 7'd99) 
            && (bit_index_reg == 3'd7)) begin
          next_state = STOP;
        end
      end
      STOP : begin
        // wait a full period to transition
        if (clock_count_reg == 7'd99) begin
          next_state = IDLE;
        end
      end
    endcase
  end

  // Output generator
  assign tx_active = (state != IDLE);
  assign tx_done = tx_done_reg;
  // serial data output (diff for different cases)
  // should only be actual data we want to send(?) during DATA state, 
  always_comb begin
    case (state)
      IDLE : tx_serial = 1'b1; // uart line stays high
      START : tx_serial = 1'b0; // goes low to indicate start bit (UMD diagram)
      DATA : tx_serial = tx_data_reg [bit_index_reg]; 
      STOP : tx_serial = 1'b1; // goes high to indicate stop, plus stays high
    endcase
  end

endmodule : uartTX

