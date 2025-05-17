// LCD2Lines.cpp
// Program to test LCD.
// The LCD display with two lines, 20 characters each.
// PORT A1: PA_15 : PA_8
// There are three control lines (PA_14:PA_12) and four data lines (PA_11 : PA_8).
// PA_14 - RS=0 Data represents Command, RS=1 Data represents Character
// PA_13 - RW=0 Writing into the LCD module
// PA_12 - E =1 Data is latched into LCD module during low to hight transition  


#undef __ARM_FP 
#include "mbed.h" 
#include "lcd.h"  
int main() 
{ 
    lcd_init();    
    lcd_write_cmd(0x80);  
    lcd_write_data(0x41);   
    lcd_write_data(0x42);  
    lcd_write_data(0x43);   
    lcd_write_cmd(0xC0);  
    lcd_write_data(0x31);   
    lcd_write_data(0x32);  
    lcd_write_data(0x33);   
while(true)
 ;     
}  
// Initialise LCD module 
// Move cursor to line 1 position 1 
// write "A" to LCD 
// write "B" to LCD 
// write "C" to LCD 
// Move cursor to line 2 position 1 
// write "1" to LCD 
// write "2" to LCD 
// write "3" to LCD 
//stop here for now