#include <Arduino_LSM6DSOX.h>
#include "PluggableUSBHID.h"
#include "USBKeyboard.h"

USBKeyboard Keyboard;
float Ax, Ay, Az;
float threshold;

void setup() {
  threshold = 20;
  IMU.begin();
}

void loop() {
  IMU.readGyroscope(Ax, Ay, Az); // functionality reversed?

  if ((abs(Ax) > threshold) || (abs(Ay) > threshold) || (abs(Az) > threshold)) {
    Keyboard.key_code_raw(0x1d, 0x08);
  }

  delay(250);
}
