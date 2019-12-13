#include "mbed.h"
#include "blinkThread.h"
 
Thread blinkThreadHandle;
 
int main(void) {
 
    printf("Started System\n");
 
    blinkThreadHandle.start(blinkThread);
}