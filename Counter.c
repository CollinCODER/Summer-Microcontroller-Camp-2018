/*
  Collin Summers
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  int n=1;
  
  while (1)
  {
    print("%d\n",n);
    n=n+1;
    
    int blue=0;
    while (blue < 1)
    {
      high(15);
      pause(128.20513);
      low(15);
      pause(128.20513);
      blue = blue + 1;
    }    

    int red=0;
    while (red<3)
    {
    high(14);
    pause(128.20513);
    low(14);
    pause(128.20513);
    red = red + 1;
    }    
  }    
}
