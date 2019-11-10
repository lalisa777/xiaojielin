# Week06

* model

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/WechatIMG213.jpeg)
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/WechatIMG216.png)

* How to connect multiple LEDs in parallel

https://www.circuitspecialists.com/blog/build-8x8-led-matrix/

Led matrices come in two arrangements. Common-row anode (left) and common-row cathode (right).

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/Common-Annode-vs-Common-Cathode.jpg)

The difference between these two configurations determine how you would call on a specific LED. With common-row anode (left), the current sources (positive voltage) are attached to rows A – D. Currents sinks (negative voltage, ground) are attached to columns 1 – 4.
Conversely, with common-row cathode (right) the current sinks (negative voltage, ground) are attached to rows A – D and currents sources (positive voltage) runs through columns 1 – 4.
Applying this knowledge, to light the top-right LED (A,4) in a common-row cathode matrix you would feed positive voltage to column 4 and connect row A to ground.

* But because the LED matrix screen I want to make is large, so there are more rows and columns, it is obvious that Arduino does not have enough interfaces.
The solution for this is to use a Shift Register. A shift register allows to expand the number of I/O pins we can use from our Arduino.

https://www.youtube.com/watch?v=Sq8SxVDO5wE
https://www.youtube.com/watch?v=-x-7WDEjUzo
https://www.youtube.com/watch?v=1eMev2gEoSw

* 74HC595:

Shift registers are often used for the purpose of saving pins on the microcontroller, as every microcontroller has a limited number of I/O pins (GPIO).

If our project needs to control 16 individual LEDs, that would normally require 16 pins of an Arduino. In the event that you don’t have 16 I/O pins available, this is where the shift register comes in handy. With two shift registers connected in series, we can accomplish the task of controlling the 16 LEDs with using only 3 I/O pins. 

https://lastminuteengineers.com/74hc595-shift-register-arduino-tutorial/

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/%E5%9B%BE%E7%89%87%201.png)

The shift register holds what can be thought of as eight memory locations, each of which can be a 1 or a 0.

To set each of these values on or off, we feed in the data using the 'Data' and 'Clock' pins of the chip.

The clock pin needs to receive eight pulses. At the time of each pulse, if the data pin is high, then a 1 gets pushed into the shift register. Otherwise, it is a 0. When all eight pulses have been received, then enabling the 'Latch' pin copies those eight values to the latch register. This is necessary, otherwise the wrong LEDs would flicker as the data was being loaded into the shift register.

The chip also has an OE (output enable) pin, this is used to enable or disable the outputs all at once. You could attach this to a PWM capable Arduino pin and use 'analogWrite' to control the brightness of the LEDs. This pin is active low, so we tie it to GND.

* How to connect the shift register and leds into cricut

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/%E5%9B%BE%E7%89%87%202.png)
