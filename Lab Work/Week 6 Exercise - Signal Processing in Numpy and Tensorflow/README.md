# Week 6 Exercise - Signal Processing in Numpy and Tensorflow

I downloaded the text of an image data address (1. Text) in the image database Imagenet, and then used request and os to download and store these photos in the img folder. Because the sizes of these pictures are different, I defined an imgcrop function to cut these pictures into a uniform size, and finally made the image average processing.

## The main idea of processing a picture with numpy  
Put the pixels on the picture into an array, and then display them again after processing, such as:
* Flip vertically: move the last line of the picture to the first line, the last line to the second line,..., the first line to the last line

