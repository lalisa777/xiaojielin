# Week06

Analog Synth Cats in Space!
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/611573302628_.pic_hd.jpg)

## Light sensor-controlled oscillator
(https://youtu.be/xMhyp0es0-Y)

## hooking up with potentiometer and light sensor
 When we built this ciruit we followed the circuit diagram below. It says pin3,4,5,6. And we just used two oscillators, at that time we didn`t realise that an oscillator has many pins, and we should use an oscillator to complete the ciruit. So that the sound can mix together. 
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/631573306020_.pic.jpg)
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/621573302637_.pic_hd.jpg)
(https://youtu.be/xMhyp0es0-Y)

How does this make sound?
The frequency of the oscillator is controlled by the capacitor and resisitor.
The capacitor sets the pitch range.
The resistor changes the frequency within that range.

This synth is very similar to the analog synth we learned in creative coding on Fridays.
The difference is that this is a physical oscillation, and that is using coding to produce sound. We use osc=t*Math.sin(a), t acts like a capacitor here to control the pitch range. And the change of a is like the change of resistance here to change the frequency.
And in the coding we can use the sinwave, coswave, square wave, triangular wave...In the lab, maybe we can change different oscillators to create different wave forms.
So, we can use different places to achieve the same effect, which is really very interesting.


