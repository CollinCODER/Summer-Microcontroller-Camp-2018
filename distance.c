/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  // Add startup code here.
  long duration, distance;
 
  while(1)
  {
    
    pulse_out(11, 10);
    duration = pulse_in(12, 1);
    
    distance = duration / 148;
    
    print("%c %d %c", HOME, distance, CLREOL);
    pause(50);
  }  
}
