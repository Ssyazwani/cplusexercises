
#undef __ARM_FP

#include "mbed.h"

#define WAIT_TIME_MS 200

#define DISPLAY_BAR_MASK 0x000000FF //PORT C0: PC_7 - PC_0
#define DISPLAY_BAR_RESET 0x00000000 

PortOut displayBarPort(PortC, DISPLAY_BAR_MASK);

unsigned char j; //8 bit data type, ranging from 0 to 255

DigitalOut led_PB14(PB_14);
DigitalOut led_PB15 (PB_15);
Ticker flipper;
Ticker flipper2;
Timeout t;

void flip()
{ 
    displayBarPort = j;
    j++;   //toggle LED PB14
}

void turn_off_led()
{
    led_PB15 = 0;
    printf("PB_15 is turned off by timeout");
}

void togglePB15()
{
    flipper2.detach();
    led_PB15 = !led_PB15;

}

int main()
{
    printf("System core clock is: %d \n", SystemCoreClock);
    led_PB14 = 1;
    displayBarPort = DISPLAY_BAR_RESET;

    j = 0; //the beginning

    flipper.attach(&flip, 200ms);
    flipper2.attach(&togglePB15,1s);
    t.attach(&turn_off_led,5s); // the address of the function to be attached (flip) and the interval (1 seconds)

    // update LED bar in a main loop. flipper will interrupt it to call flip
    while (true) 
    {
        //displayBarPort = j;
        thread_sleep_for(1);
        //j++; //increment j by 1
    }
  
}