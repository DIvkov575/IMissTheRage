# IMissTheRage
---

https://github.com/DIvkov575/IMissTheRage/assets/79413560/92baf38e-baf1-4f3e-a1be-ab982c30c9c7



Are you raging? Do you wish writing code was easier?

Cry No More!

With <b>IMissTheRage</b> everytime you slam you desk out of frustration, <b>IMissTheRage</b> simply 'undos' your most recent changes!!!

---

Runs on Arduino Nano RP2040 Connect 

Compatible with Macos (can be made compatible by changing char code of meta key (0x08) to Ctrl (find it yourself in USBKeyboard.h)

Some Notes
- Aruino RP2040 is an arduino board based on rasberry pi's RP2040 Microcontroller (which was a huge pain to work with because most online sources were only ATMEL MCU compatible)
- Aruino RP2040 has an IMU unit (Acceleromter)
- Aruino RP2040 has native usb 🤲

- Rage threshold is adjusted with 'threshold' variable
- Requires the Arduino_LSM6DSOX library (installable via arduino IDE)
- Arduino_LSM6DSOX readGyroscope and readAccelerometer seem to swapped, which why I use readGyroscope usage for accelerometer data

---
![](https://media.tenor.com/JG-4APCpFkgAAAAi/angry-emoji-angry.gif)
