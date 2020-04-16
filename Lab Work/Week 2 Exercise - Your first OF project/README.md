# Week 2 Exercise - Your first OF project  
![img](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/example.gif)  

Through this assignment, I mainly mastered the folder structure of files of openframeworks and how to create and edit these files. Also by rewriting the image project of last semester, I reviewed the pixel related knowledge. 

In this project, first of all, I changed all the colors in this painting into their corresponding opposite colors. Then the color displayed in the painting is controlled by changing of the mouse horizontal coordinate position.  

The implementation of this project in openframeworks is actually very similar to that in mimic. The whole idea and process are the same, only the writing language is different. In the process, we use two sets of pixels:   

1. The set of RGB values of each pixel on the original image  

2. The set of RGB values of each pixel on the image after changing

By going througth all the RGB values of the pixel points on the original image, these values are processed by certain rules (in this project, they are processed into opposite colors and displaying pixels according to the mouse control), and finally a new set of RGB values of the pixel points is formed and displayed on the canvas.  
