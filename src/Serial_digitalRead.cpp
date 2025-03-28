// #include <Arduino.h>

// void setup() {
//     //all pin are 5V tolerant on black pill except PA0 and PB5
//     Serial.begin(9600);
//   pinMode(PB1, INPUT_PULLDOWN);   //button connected to PB1 blackpill
//   pinMode(PB2, INPUT_PULLDOWN);   //button connected to PB2 blackpill
//   pinMode(PC13, OUTPUT);    //blue led connected to PC13    blackpill
// }

// void loop(){
//     int buttonState1 = digitalRead(PB1);
//     int buttonState2 = digitalRead(PB2);
//     if (buttonState1 == HIGH) {
//         digitalWrite(PC13, HIGH);
//     }
//     if (buttonState2 == HIGH) {
//         digitalWrite(PC13, LOW);
//     }
//     delay(10);
//     Serial.print("Button PB1: ");
//     Serial.print(buttonState1);
//     Serial.print(" Button PB2: ");
//     Serial.println(buttonState2);
//     Serial.println("LED state: " + String(digitalRead(PC13)));
// }