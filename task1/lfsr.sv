module lfsr(
    input logic         clk,
    input logic         rst,
    input logic         en,
    output logic[3:0]  data_out
);

    logic [3:0] sreg;

always_ff @ (posedge clk, posedge rst)
    if(rst)
        sreg <= 4'b0001;
    else sreg <= en ? {sreg[3:1], sreg[4] ^ sreg[3]} : sreg;

assign data_out = sreg[3:0];
endmodule
