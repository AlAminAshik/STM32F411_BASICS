// //3.3V-GND works better than 5V for analogRead
// //STM32F411 supports 12 bit ADC resolution
// #include <Arduino.h>

// void setup() {
//     Serial.begin(115200);
//     analogReadResolution(12); // Set ADC resolution to 12 bits
//     pinMode(PB1, INPUT_ANALOG); //PA1 is an analog pin on the blackpill
// }

// void loop() {
//     int sensorValue = analogRead(PB1);
//     Serial.println(sensorValue);
//     delay(100);
// }

