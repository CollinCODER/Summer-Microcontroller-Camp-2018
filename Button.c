/*
  Collin Summers
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

const int BUTTON_0 = 0;
const int BUTTON_1 = 1;
const int LED_0    = 14;
const int LED_1    = 15;
int number;

int main()                                    // Main function
{
  // Add startup code here.
  int pressed_0;
  int pressed_1;
 
  while(1)
  {
    // Add main loop code here.
    
    pressed_0 = input(BUTTON_0);
    if (pressed_0 == 1)
      high(LED_0);
    else
      low(LED_0);
      
       pressed_1 = input(BUTTON_1);
    if (pressed_1 == 1)
      high(LED_1);
    else
      low(LED_1);
      
      print("%cButton 0 is %d %c\n", HOME, pressed_0, CLREOL);
      print(" Button_1 is %d %c\n" , pressed_1, CLREOL);
      
      number = (pressed_0 * pow(2,1)) + (pressed_1 * pow(2,0));
      print(" Decimal Number = %d %c\n", number, CLREOL);
      pause(50);
  }  
}
