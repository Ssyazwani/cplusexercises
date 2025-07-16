//comments are from sample code given
// lab 6: code edited to be able to use PA4 and PB12 to control the flow of osc

#undef __ARM_FP

#include "mbed.h"

PwmOut motor(PA_7);
DigitalIn button_PA4 (PA_4);
DigitalIn button_PB12 (PB_12);

int main()
{

    // printf("System core clock is: %d \n", SystemCoreClock);

     //specify period first
     motor.period(0.2f);   //0.2s period 
    // motor.write(0.75f);     //75% duty cycle, relative to period
    
    // printf("Duty cycle is: 0.75\n");

    // while (button_PC12 == 1); //wait for pressing button
    // while (button_PC12 == 0); //wait for releasing button

    // motor.write(0.5f);     //50% duty cycle, relative to period

    // printf("Duty cycle is: 0.5\n");

    // while (button_PC12 == 1); //wait for pressing button
    // while (button_PC12 == 0); //wait for releasing button

    // motor.write(0.25f);     //25% duty cycle, relative to period
  
    // printf("Duty cycle is: 0.25\n");

    // while (button_PC12 == 1); //wait for pressing button
    // while (button_PC12 == 0); //wait for releasing button

    // motor.suspend();

    // while (true);

    //  motor.write(0.25f); 

    while (button_PA4 ==0){
        motor.write(0.5f);
        printf("Duty cycle is: 0.5\n");

    }


    while (button_PA4 == 1 && button_PB12 ==1){
         motor.write(0.25f); 
         printf("Duty cycle is: 0.25\n");

    }
         

while (button_PA4 == 1 && button_PB12 ==0){
    motor.write(0.5f);
        printf("Duty cycle is: 0.5\n");

}
        
    
    
    // while (button_PA4 == 0);
    // while (button_PA4 == 1);
    // while (button_PC12 == 0);
    // while (button_PC12 == 1);
    // {
    //      motor.write(0.5f); 

    // }
    
   
    

    // while (true);

    
}//main
