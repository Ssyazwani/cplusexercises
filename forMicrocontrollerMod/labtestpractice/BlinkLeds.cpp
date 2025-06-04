//Practice LabTest part 1: program STM32 to be able to light up 0b00000101 when pressed
// PB_12 is active low ---> PB_12 == 0, means it has been pressed

#undef __ARM_FP

#include "mbed.h"
#define WAIT_TIME_MS 1000

#define DISPLAY_BAR_MASK 0x000000FF //PORT C0: PC_7 - PC_0
#define DISPLAY_BAR_RESET 0x00000000 

PortOut displayBarPort(PortC, DISPLAY_BAR_MASK);
DigitalIn PB12 (PB_12)

int main()
{
    printf("This is MAPP BlinkLeds running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
    displayBarPort = DISPLAY_BAR_RESET;

    while (true)
    {

        if(PB12 == 0){
            //0 means the button is pushed,1 is when the button is not pushed

        displayBarPort = 0b0000101;
        thread_sleep_for(WAIT_TIME_MS);

        }
        else {
            displayBarPort =0;
        }


        
    }
}
