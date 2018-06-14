/*
  Collin Summers
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

const int TRIGGER_PIN =0;
const int ECHO_PIN =1;
const int SEND_LED =26;
const int RECV_LED =27;
const int WARN_LED =15;

int main()                                    // Main function
{
  // Add startup code here.
  long distance;
  long duration;
  
  low(TRIGGER_PIN);
  low(ECHO_PIN);
  low(SEND_LED);
  low(RECV_LED);
  low(WARN_LED);
  pause(250);
 
  while(1)
  {
    // Add main loop code here.
    high(SEND_LED);
    pulse_out(TRIGGER_PIN, 10);
    duration = pulse_in(ECHO_PIN, 1);
    low(SEND_LED);
    pause(50);
    high(RECV_LED);
    print("%c%c", HOME, CLREOL);
    distance = duration / 148;
    print("Distance = %d inches", distance);
    low(RECV_LED);
    if (distance < 7)
      high(WARN_LED);
    else
      low(WARN_LED);
    pause(250);
    
  }  
}
