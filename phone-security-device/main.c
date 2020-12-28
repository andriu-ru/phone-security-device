//2020.12.23

#include "setupCPU.h"
#include "lib_74hc595.h"



int main(void)
{
	
setupCPU();
portsActivation();

OE_on;
MR_on;

//test74hc595();
  
    while (1) 
    {
			char a = 1;
			while(a<=16)
				{
				registerPortActivation(a);
				a++;
				_delay_ms(500);
				MR_off;
				STCP_UP;
				MR_on;
				STCP_DOWN;
				}
		
    }
}

