
#ifndef B_H_
#define B_H_
#include <Arduino.h>

class blink
{
public:
    blink();
    bool state();
    void on();
    void off();
    void blinkFast(int ms);
private:
    bool light = false;

};


#endif