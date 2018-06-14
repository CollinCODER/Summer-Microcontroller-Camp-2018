/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

const int TOP_BUTTON = 1;
const int BOTTOM_BUTTON = 0;
int i = 0;

int main()                                    // Main function
{
  // Add startup code here.
  int input_bit;

  while(i < 4)
  {
    // Add main loop code here.
    
    while (input(TOP_BUTTON) != 1)        //waiting for the clock button to be pressed
    {
      // intentionally blank
    }
    
    while (input(TOP_BUTTON) == 1)         //waiting for the clock button to be let go
    {
      //intentionally blank
    } 
              
    input_bit = input_bit << 1;
    input_bit = input_bit + input(BOTTOM_BUTTON);
    print("We read input bit %d\n" , input(BOTTOM_BUTTON)); 
    i = i + 1;         
    
  }  
print("Number is %d\n", input_bit);
}
