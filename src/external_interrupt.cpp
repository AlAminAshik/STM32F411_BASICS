//this code uses the external interrupt pin of stm32f411 blackpill to toggle the led on and off
//the external interrupt pin is PB1 //make sure to connect a decoupling capacitor to button
//the led is connected to PC13

#include <Arduino.h>

void toggleLED() {
    digitalWrite(PC13, !digitalRead(PC13)); //toggle the led
}

void setup() {
    Serial.begin(115200);
    pinMode(PB1, INPUT_PULLDOWN); //PB1 is an external interrupt pin on the blackpill
    pinMode(PC13, OUTPUT); //PC13 is an output pin on the blackpill
    attachInterrupt(PB1, toggleLED, RISING); //attach the interrupt to the function toggleLED
}

void loop() {
    delay(1000);
}