# Week02-Sensors, knobs, and Serial Data
## Lab 00 - Leds in Serial and Parallel
I use both experimental and computational methods to find the answer. But there is no 220k resistor in the lab, I used the 220 resistor to do the experiment.

* Computational method(with 220 resistor)

Assume that the forward operating voltage of LED is 1.4 volts, and the forward current rating of it ia 10mA.

1. Serial-2 Leds

  U(resistor)=R*I=220*0.01=2.2V

  U(LEDs)=U(total)-U(resistor)=5V-2.2V=2.8V

  Number=U(LEDs)/U(LED)=2.8V/1.4V=2
  

2. Parallel- about 47 Leds

  I(resistor)=U/R=5/220=1/44A

  I(LEDs)=I(total)-I(resistor)=1/2A-1/44A=21/44A

  Number=I(LEDs)/I(LED)=(21/44)A/0.01A=47.72

  
* Experimental method(with 220 resistor)

1. Serial-2 Leds

  ![alt text](https://github.com/lalisa777/xiaojielin/blob/master/%20Advanced%20Physical%20Computing/file/351571169212_.pic_hd.jpg)

2. Parallel

  The breadboard do not have enough space to put Leds, so...
  ![alt text](https://github.com/lalisa777/xiaojielin/blob/master/%20Advanced%20Physical%20Computing/file/321571169190_.pic_hd.jpg)

* Something interesting
  ![alt text](https://github.com/lalisa777/xiaojielin/blob/master/%20Advanced%20Physical%20Computing/file/331571169195_.pic_hd.jpg)

  ![alt text](https://github.com/lalisa777/xiaojielin/blob/master/%20Advanced%20Physical%20Computing/file/341571169201_.pic_hd.jpg)

When the LEDs of different colors are connected in parallel, the LEDs of different colors are not illuminated together, and only one color of the LED can be illuminated. but the LEDs of the two colors can be separately illuminated.

I found the reason is that the forward voltage these two LEDs is different. But the voltage of each branch in the parallel circuit is equal.

## Lab 01 - Serial Data
I made an interesting test about how big a house you can buy. The game is started by pressing the button. After two questions, the test result can be obtained. The game can be restarted by pressing the button again.
(https://youtu.be/SQJgmlcp7r4)

Lab 02 - Potentiometers (Knobs)
（https://youtu.be/knHOvQrmvsE）


## Lab 03 - Light Dependent Resistors
(https://youtu.be/Xr9NYzGR1z0)

## Lab 04 - Playing with Common Sensors
Our team is the square FSR. The resistance of an FSR varies as the force on the sensor increases or decreases. When no pressure is being applied to the FSR, its resistance will be larger than 1MΩ. The harder you press on the sensor’s head, the lower the resistance between the two terminals drops.
（https://youtu.be/vknVHCROKcY）