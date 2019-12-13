#include "mbed.h"
#include "blinkThread.h"
 
 
static DigitalOut led1(LED1);
 
void blinkThread(void) {
 
    while (true) 
    {
        led1 = 1;
        ThisThread::sleep_for(900);
        led1 = 0;
        ThisThread::sleep_for(100);
    }
}