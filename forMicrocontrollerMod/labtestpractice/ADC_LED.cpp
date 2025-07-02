/* Test_ADC.cpp
 * mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 * 
 * If level high, turn on Motor
 * if level low, turn on transistor
 */
#undef __ARM_FP

#include "mbed.h"

#define WAIT_TIME_MS 500 

#define DISPLAY_BAR_MASK 0x000000FF //PORT C0: PC_7 - PC_0
#define DISPLAY_BAR_RESET 0x00000000 
#define LOW 0x40
#define HIGH 0xBB
PortOut ledbar(PortC, DISPLAY_BAR_MASK);

AnalogIn Trimmer(PA_0);
DigitalOut PA07(PA_7);
DigitalOut PA06(PA_6);

uint16_t voltage = 0;  //read the ADC code

int main()
{
    printf("This is the modified bare metal example running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
    
    ledbar = DISPLAY_BAR_RESET;

    while (true)
    {
        //start A/D conversion, read 16-bit ADC results
        voltage = Trimmer.read_u16();
        printf ("The normalized 16-bit value is: %#x \n", voltage);
        
        //output upper 8-bit of result to LED bar
        ledbar = (voltage >> 8) & 0xFF;

        if (ledbar > 0xBB)
        {
             PA07 = 1;
             thread_sleep_for(WAIT_TIME_MS);
             

        }
        else if (ledbar < LOW )
    
        {     
             PA06 = 0;
             thread_sleep_for(WAIT_TIME_MS);

        }

        else {

            PA06 = 0 ;
            PA07 = 0 ;

        }

        
        thread_sleep_for(WAIT_TIME_MS);
    }

    return 0;
}
