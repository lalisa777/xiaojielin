# Week 07
- - - -
* Soldered a 5 * 5 sample for testing
[Make Your Own LED Matrix ! - YouTube](https://www.youtube.com/watch?v=evA4Fp1G76E)
I made my own LED matrix sample according to this video. In order to test how the shift register and LED matrix work together (code and circuit)
![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/7E32ADFB-F17E-456C-8100-75A2CDBC4665.png)
* Try to control the matrix with shift register
[74HC595在【8x8LED点阵】中的使用_whalefall-CSDN博客](https://blog.csdn.net/whalefall/article/details/79936285)
[Arduino+2片74hc595 驱动8x8(共阳)点阵(1008BS)_Lengff-CSDN博客](https://blog.csdn.net/qq_31878883/article/details/93181856)
[8*8LED点阵显示爱心的Arduino实现_74HC595,arduino_ki1381的专栏-CSDN博客](https://blog.csdn.net/ki1381/article/details/52262127)
I watched a lot of introductions and tried many methods to control the led matrix without success. The following video is the most successful one, but it still does not achieve the result I want. And this version of project requires a total of 512 LEDs (16 * 32), and the workload of soldering 512 LEDs into a matrix is also very large, so I started to think about whether I could use a different way of expression which can be simpler and more efficient. [1579090005571405 on Vimeo](https://vimeo.com/user107527626/review/384997358/31e3494c4b)
* New idea
I decide to divide the entire LED matrix screen into LED modules, and the LEDs in each module were connected in series.
![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/BE200169-095D-467E-8E7A-E49B442527E7.png)

In order to achieve this effect, I decide to make nine hexagons composed of LEDs. Each hexagon has two layers, the lower layer is LEDs, and the upper layer is fiber. Each LED corresponds to the position of the fiber. When the LED lights up, the fiber will shine. When users are standing in the distance, all nine groups of LEDs are lit, and as we keep approaching, the LEDs will go out one by one. Use this effect to remind people to take a step back so that we can take a closer look at ourselves.
In order to add fun, when we walk into and all the lights are off, we can touch each hexagon to light up the LEDs, and each LED has a different tone,  so users  can try to play their own melody.
- - - -
INPUT:      Ultrasonic Ranging Module HC-SR04  
                   Photodiode 
OUTPUT:  LED
                   Buzzer
    

