#include "mbed.h"


DigitalOut myLED(LED1);

DigitalOut myLED3(LED3);


void Led(DigitalOut &ledpin, int n); // blink n times


int main()

{

   myLED = 1;

   myLED3 = 1;

   while (true)

   {

      Led(myLED3, 3);

      Led(myLED, 2);

   }

}