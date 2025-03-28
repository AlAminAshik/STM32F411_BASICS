//analogWrite is not used instead pwmWrite is used since this will enable full 16-bit resolution
#include <Arduino.h>
#include <HardwareTimer.h>
HardwareTimer *timer = new HardwareTimer(TIM2); //PA0 is TIM2 is a 16-bit timer

void setup() {
  pinMode(PA0, OUTPUT); //PA0 is an pwm pin on the blackpill

    // Configure Timer2 to generate PWM
    timer->setMode(1, TIMER_OUTPUT_COMPARE_PWM1, PA0);  // Channel 1, PWM mode
    timer->setOverflow(65535, TICK_FORMAT);  // Set PWM frequency to max, sets the max value to 65535 (16-bit resolution)
    timer->setCaptureCompare(1, 0, TICK_COMPARE_FORMAT);  // Start with 0 duty cycle, led off, TICK_COMPARE_FORMAT ensures that values match the timer resolution.
    timer->resume();  // Start the timer
}

void loop() {
    //uint16t can hold upto 65535
    //it is important to note that if the loop goes beyond 65535, it will show wrap-around behavior start from 0
    //so a subtraction has been made
    for (uint16_t duty = 0; duty <= 65535 - 50; duty += 50) {
        timer->setCaptureCompare(1, duty, TICK_COMPARE_FORMAT); // Adjust duty cycle, TICK_COMPARE_FORMAT ensures that values match the timer resolution.
        delay(1);
      }
    for (uint16_t duty = 65535; duty >= 0 + 50; duty -= 50) {
        timer->setCaptureCompare(1, duty, TICK_COMPARE_FORMAT); //TICK_COMPARE_FORMAT ensures that values match the timer resolution.
        delay(1);
      }
}