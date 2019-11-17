# Week 07
## Shift Registers and Multiplexing

(https://youtu.be/iENuxLYKcMA)

I studied the code which is provided on github(shift-register.ino).

The UpdateLEDs and UpdateLEDsLong have the same function, they display the 256 numbers from 0 to 255 one by one, but it's binary. UpdateLEDs is concise which is the common and standard way when using 74hc595. UpdateLEDsLong shows every step how shift register works. It is more detailed, so that I can better understand its principle.

* Working Principle

1. bit=value&B1000000; 
   
   Select only the eighth bit, and this process will repeat 8 times for 8 pins.

2. if(bit == 128){digitalWrite(data, HIGH); else{digitalWrite(data, LOW); 

    128 means B10000000, so if the eighth bit is equal to 1, the light turns on, otherwise the light will go off.

3.value = value << 1; 

     Move the number up one bit value so next time bit 7 will be bit 8 which is ready to be checked.

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/841574029803_.pic_hd.jpg)
![alt text](https://github.com/lalisa777/xiaojielin/blob/b1847905f098032baf4da52d88c3f47ff3172546/Advanced%20Physical%20Computing/file/861574031736_.pic_hd.jpg)

I made a small led matrix(5*5), I wanted to control the matrix by two 74hc595. I beleve that I built the right cricut, but it still deesn`t work. So I suppose that there must be something wrong with the coding, I need more time to figure it out.