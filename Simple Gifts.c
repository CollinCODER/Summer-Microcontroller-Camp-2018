/*
  Collin Summers
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "adcDCpropab.h"


int main()                                    // Main function
{
  // Add startup code here.
  float volts;
  
  adc_init(21, 20, 19, 18);
 
  while(1)
  {
    // Add main loop code here.
    volts = adc_in(3);
    high(15);
    low(14);
    pause(volts+100);
    low(15);
    high(14);
    pause(volts+100);
    print("%cA/D value = %f%c/n" , HOME, (volts*5.0)/4095, CLREOL);
    freqout(0,256,261.626);
    freqout(0,256,261.626);
    freqout(0,512,349.228);
    freqout(0,256,349.228);
    freqout(0,256,391.995);
    freqout(0,256,440.000);
    freqout(0,256,349.228);
    freqout(0,256,440.000);
    freqout(0,256,466.164);
    freqout(0,512,523.251);
    freqout(0,256,523.251);
    freqout(0,256,493.883);
    freqout(0,512,0440.00);
    freqout(0,256,391.995);
    freqout(0,256,349.228);
    freqout(0,512,391.995);
    freqout(0,512,391.995);
    freqout(0,512,391.995);
    freqout(0,512,349.228);                   //end of measure 3
    freqout(0,256,391.995);
    freqout(0,256,440.000);
    freqout(0,256,391.995);
    freqout(0,256,329.628);
    freqout(0,512,261.626);
    freqout(0,512,261.626);                   //end of measure 4
    freqout(0,256,349.228);
    freqout(0,256,329.628);
    freqout(0,256,349.228);
    freqout(0,256,391.995);
    freqout(0,512,440.000);
    freqout(0,256,391.995);
    freqout(0,256,391.995);                    //end of measure 5
    freqout(0,512,440.000);
    freqout(0,512,493.883);
    freqout(0,512,523.251);
    freqout(0,512,523.251);                     //end of measure 6
    
    
    
    
    
    
  }  
}
