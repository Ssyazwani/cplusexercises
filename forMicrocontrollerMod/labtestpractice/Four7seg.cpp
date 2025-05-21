//Four7seg.cpp

#undef __ARM_FP

#include "mbed.h"
#define WAIT_TIME_MS 1000

#define SEVEN_SEGMENT_MASK 0x000000FF //PORT B0: PB_7 - PB_0, for 7 Seg display
#define SEVEN_SEGMENT_RESET 0x00000000 

PortOut sevenSegmentPort(PortB, SEVEN_SEGMENT_MASK);


//Practice Lab Test part 2: make it appear to be "-123" with - displaying nothing
BusOut sevenSegmentDIG(PC_8, PC_9, PC_10, PC_11);

DigitalIn button(PC_13);

int main()
{
    printf("This is MAPP Four7seg running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
    //reset
    sevenSegmentPort = SEVEN_SEGMENT_RESET;
    sevenSegmentDIG = 0;		//0b00000000
    thread_sleep_for(WAIT_TIME_MS);

    while (true)
    {
        sevenSegmentDIG = 0b00000001; // enable DIG0
        sevenSegmentPort = 0x0000004F;  //display 3: 0b01001111
        thread_sleep_for(WAIT_TIME_MS);

        
        sevenSegmentDIG = 0b00000010; // enable DIG1
        sevenSegmentPort = 0x0000005B;  //display 2: 0b01011011
        thread_sleep_for(WAIT_TIME_MS);

        sevenSegmentDIG = 0b00000100; // enable DIG2
        sevenSegmentPort = 0x00000006;  //display 1: 0b00000110
        thread_sleep_for(WAIT_TIME_MS);

        // sevenSegmentDIG = 0b00001000;  // enable DIG3
        // sevenSegmentPort = 0x0000004F;  //display 3: 0b01001111
        // thread_sleep_for(WAIT_TIME_MS);
    }
}
