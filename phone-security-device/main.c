//2020.12.23

#include "setupCPU.h"
#include "lib_74hc595.h"



int main(void)
{
	
setupCPU();
activationPort();

test74hc595();


  
    while (1) 
    {
    }
}

