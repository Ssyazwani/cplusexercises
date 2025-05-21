// Practice Lab Test Part 3 
// show on line 1 "Press 1", nothing changes if '1' is not pressed
// when '1' is pressed, program will print Bye on second row and the program would stop
#undef __ARM_FP

#include "mbed.h"
#include "lcd.h"	
#include "keypad.h"	

unsigned char key, outChar;
char Message1 [ ] = "Press 1 ";	 
char Message2 [ ] = "Bye ";

// ---- Main Program ---------------------------------------------------------------
int main( )
{
	printf("This is MAPP LCDKeypad running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

	int i;
	lcd_init();						// Initialise LCD module

	while(1)
	{
		lcd_write_cmd(0x80);			// Move cursor to line 1 position 1
		for (i = 0; i < 7; i++)		
		{
			outChar = Message1[i];
			lcd_write_data(outChar); 
		}
		

		lcd_write_cmd(0xC0);		// Move cursor to line 2 position 1
		
		while(1){

			key = getkey(); 
		
			if (key == '1'){

				for(i =0; i<3; i++){
					outChar = Message2[i];
					lcd_write_data(outChar)
				}
			} while(1); //stops the program after the "Bye" is printed


		}
		
		
		
		
	}
}




