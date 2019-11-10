# Week05 

## Ideation—Mirror

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/fefc8214e1255290453fd1d41e456e5a.jpg)

### Concept:

The purpose is to inspire players to rethink about themselves and how to better understand themselves. When we look at ourselves in the mirror, we are always close to the mirror, it means that we are more willing to pay attention to the details on the surface. But a better way is to step back and look at ourselves comprehensively.

#### Ideation 1: 

Add a camera above the LED screen to capture the player's actions, so that the player's actions can be displayed on the LED screen in real time (just like looking in the mirror). Add another distance sensor. When the player approaches the screen gradually and the distance is less than a certain value, the player's shadow on the LED will disappear.

* But the camera can't be regarded as an input. Here, we can use the motion sensor to detect the player's action.

* A motion sensor can tell if people are moving, but if I want to extract image information. A  depth sensor like the Kinect is more suitable.

#### Ideation 2: 

This screen is touchable. When the player approaches, the shadow on the screen disappears. When he touches the screen, it will light up and then darken gradually. For special visual and tactile effects, add a bunch of fiber in front of each LED, so that the light will look softer and have different touch.

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/e295ead0d0944d7a16565bec6ca5c819.jpg)
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/f8532c843da23176de3bc9f13091e069.jpg)
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/1bbebb3218648d724c948d1f513ecfaf.jpg)

#### Ideation 3: 

In the process of player "looking in the mirror", some specific postures will trigger some "bonus scene", for example, standing still for more than 3 seconds will play specific music, special patterns will appear on the screen... These contents need to be explored by players themselves.

![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/23061573399340_.pic_hd.jpg)
![alt text](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/23051573399334_.pic_hd.jpg)

#### Process:

1.	Make a LED matrix displays
2.	Camera input image
3.	Image content converts to coordinates and pixels
4.	LED lights up at corresponding position

#### Question:

1.	How to connect multiple LEDs in parallel
2.	How to convert image content to coordinates and pixels
3.	How to control LEDs separately

