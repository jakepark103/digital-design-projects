# Bloom Filter (UART + Data Structures)

UART RX: will receive {OPCODE, DATA, TERM}
OPCODE: will either tell the system to insert or lookup
CONTROL PATH: will have states IDLE, INSERT, LOOKUP, and DONE (loops back to IDLE)

  IDLE: basically wait for data
  INSERT: insert data, await retrieval from BRAM, flag done low
  LOOKUP: check data, await retrieval from BRAM, flag done low
  DONE: once data received, generate output, flag done high, loop back to idle 

DATA PATH:  compute hashes hash_mul31 and hash_lcg, access BRAM, based on INSERT it will insert into bit vector, if LOOKUP does a check with
retrieved data, compute output (Yes, No, Done) (maybe assign boolean values to YES and NO?)

UART TX: send the data back to the PC

modules probably needed: muxes, alu (with shift and mult), decoder?, flip flops, bram


