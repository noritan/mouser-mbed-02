#include "mbed.h"
#include "blinkThread.h"
 
 
static DigitalOut led1(LED1);
 
void blinkThread(void) {
 
    while (true) 
    {
        led1 = !led1;
        ThisThread::sleep_for(500);
    }
}