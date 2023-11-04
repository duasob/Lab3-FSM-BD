module f1_fsm(
    input logic         en,
    input logic         clk,
    input logic         rst,
    output logic[8:1]   data_out
);
    logic [8:1] pulse;
    typedef enum  {S0, S1, S2, S3, S4, S5, S6, S7, S8 } my_state;
    my_state current_state, next_state;

    always_ff @(posedge clk, posedge rst)
        if (rst) current_state <= S0;
        else  current_state <= en ? next_state : current_state;

    always_comb begin
    case (current_state)
        S0: begin
            next_state = S1;
            pulse = 8'b00000000;
        end
        S1: begin
            next_state = S2;
            pulse = 8'b00000001;
        end
        S2: begin
            next_state = S3;
            pulse = 8'b00000011;
        end
        S3: begin
            next_state = S4;
            pulse = 8'b00000111;
        end
        S4: begin
            next_state = S5;
            pulse = 8'b00001111;
        end
        S5: begin
            next_state = S6;
            pulse = 8'b00011111;
        end
        S6: begin
            next_state = S7;
            pulse = 8'b00111111;
        end
        S7: begin
            next_state = S8;
            pulse = 8'b01111111;
        end
        S8: begin
            next_state = S0;
            pulse = 8'b11111111;
        end
        default: begin
            next_state = S0;
            pulse = 8'b00000000; 
        end
    endcase
end

assign data_out = pulse[8:1];

endmodule
