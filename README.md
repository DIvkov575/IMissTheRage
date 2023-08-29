# IMissTheRage
---
![](https://media.tenor.com/JG-4APCpFkgAAAAi/angry-emoji-angry.gif)]
![](https://i.pinimg.com/originals/3b/f6/73/3bf673ac817110e15958ce675e914ce0.png)


Are you raging? Do you wish writing code was easier?

Cry No More!

With <b>IMissTheRage</b> everytime you slam you desk out of frustration, <b>IMissTheRage</b> simply 'undos' your most recent changes!!!

---


Runs on Arduino Nano RP2040 Connect 

Compatible with Macos (can be made compatible by changing char code of meta key (0x08) to Ctrl (find it yourself in USBKeyboard.h)

Some Notes
- Aruino RP2040 is an arduino board based on rasberry pi's RP2040 Microcontroller (which was a huge pain to work with because everything is written for ATMEL)
- Aruino RP2040 has an IMU unit (Acceleromter)
- Aruino RP2040 has native usb 🤲

- Rage threshold is adjusted with 'threshold' variable
- Requires the Arduino_LSM6DSOX library (installable via arduino IDE)
- Arduino_LSM6DSOX readGyroscope and readAccelerometer seem to swapped, hence readGyroscope usage
