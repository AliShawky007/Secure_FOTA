/*
* main.c
*
*
* Note: White(R+G+B) LED Blink on TM4C123GXL Eval Board
*/


#include "Fls.h"
//---SYSTEM CONTROL REGISTERS---//
#define SYS_CTRL_RCGC2  (*((volatile unsigned long *)0x400FE108))   //offset of RCGC2 register is 0x108
#define CLK_GPIOF   0x20
//---GPIO-F REGISTER---//
#define PORTF_DATA  (*((volatile unsigned long *)0x40025038))   //offset of DATA register for PF1, PF2, PF3 is 0x38 [PF7:PF0::9:2]
#define PORTF_DIR   (*((volatile unsigned long *)0x40025400))   //offset of DIR register is 0x400
#define PORTF_DEN   (*((volatile unsigned long *)0x4002551C))   //offset of DEN register is 0x51C
//---PORT-F I/O---//
#define PF1 0x02
#define PF2 0x04
#define PF3 0x08
//---FUNCTION PROTOTYPE---//
void delay(unsigned long);
int main(void)
{



   SYS_CTRL_RCGC2 |= CLK_GPIOF;
   PORTF_DIR |= 0x0000000E;    //set PF1, PF2, PF3 as output
   PORTF_DEN |= 0x0000000E;    //enable PF1, PF2, PF3
   PORTF_DATA = 0;
   uint32 Data = 0xFAFA0000;
   uint32 cnt = 0;

   while(1)
   {
       PORTF_DATA |= (PF1 | PF2 | PF3);
       delay(1000000);
       PORTF_DATA &= ~(PF1 | PF2 | PF3 );
       delay(1000000);

      // for(cnt = 0 ; cnt < 32 ; cnt++)
       {
          FLS_REGISTERS->FWBn = 0xfafa0000;
       }
       //(*(volatile uint32*)(0x400FD100)) = 0xfafa0000;
       //(*(volatile uint32*)(0x400FD104)) = 0xfafa0000;
       //(*(volatile uint32*)(0x400FD108)) = 0xfafa0000;

       FLS_REGISTERS->FMA = 0X30000;

       FLS_REGISTERS->FMC2 = 0XA4420001 ;
       //(*(volatile uint32*)(0x400FD020)) = 0XA4420001;

       while(((*(volatile uint32*)(0x400FD020)) & 1) != 0);
   }


    return 0;
}
void delay(unsigned long count)
{
   unsigned long i=0;
   for(i=0; i<count; i++);
}
