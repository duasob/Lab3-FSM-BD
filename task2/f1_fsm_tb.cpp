#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_fsm.h"

#include "vbuddy.cpp"     // include vbuddy code


int main(int argc, char **argv, char **env) {
  int i;     
  int clk;       
  int END = 1000000;
  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_fsm* top = new Vf1_fsm;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("f1_fsm.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T2: PACO");
  vbdSetMode(1);

  top->clk = 1;
  top->rst = 0;
  top->en = 1;
  


  for (i=0; i<END; i++) {
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
    }

    if (i<10){
      top->rst = 1;
    }else{
      top->rst = 0;
    }
  
    top->en = vbdFlag();

    /*if(top->en){
      std::cout << "1" << std::endl;
    }else{
      std::cout << "0" << std::endl;
    }
    std::cout << top->data_out << std::endl;*/
    
    
    vbdHex(2, (int(top->data_out) >> 4)& 0xF);
    vbdHex(1, int(top->data_out)& 0xF);
    
    vbdBar(top->data_out & 0xFF);
    vbdCycle(i);

    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);               
  }

  vbdClose();   
  tfp->close(); 
  exit(0);
}