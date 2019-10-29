#include "b.h"
#include <Arduino.h>


blink::blink (){
    light = false;
    digitalWrite(LED_BUILTIN, LOW);  
}

bool blink::state(){
    return light;
}

void blink::off(){
    light = false;
    digitalWrite(LED_BUILTIN, LOW);  
}

void blink::on(){
    light = true;
    digitalWrite(LED_BUILTIN, HIGH);  
}


void blink::blinkFast(int ms){
    on();
    delay(ms);
    off();
    delay(ms);
    on();
    delay(ms);
    off();
    delay(ms);
    on();
    delay(ms);
    off();
    delay(ms);

}