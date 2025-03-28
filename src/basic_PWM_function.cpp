// //This code can only output 8 bit resolution of pwm output
// #include <Arduino.h>

// #define PWM_PIN PA0  // PA0 is connected to the blue LED on the BlackPill

// void setup() {
//   pinMode(PWM_PIN, OUTPUT);  // Set PA0 as output
// }

// void loop() {
//   // Fade in (Increase brightness)
//   for (int duty = 0; duty <= 255; duty += 5) {
//     analogWrite(PWM_PIN, duty);
//     delay(10);
//   }

//   // Fade out (Decrease brightness)
//   for (int duty = 255; duty >= 0; duty -= 5) {
//     analogWrite(PWM_PIN, duty);
//     delay(10);
//   }
// }
