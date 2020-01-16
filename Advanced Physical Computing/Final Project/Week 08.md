# Week 08
- - - -
## Sensor Test
* Ultrasonic Ranging Module(HC-SR04)

![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/20190612124229202.gif)

Ultrasonic sensor reads and writes the distance to an object in the serial monitor.
This is a test I did. When the distance is less than 10cm, the light is on.
```arduino
const int TrigPin = 2; 
const int EchoPin = 3; 
float cm; 
void setup() 
{ 
Serial.begin(9600); 
pinMode(TrigPin, OUTPUT); 
pinMode(EchoPin, INPUT); 
pinMode(13,OUTPUT);
} 
void loop() 
{ 
digitalWrite(13, LOW);

digitalWrite(TrigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(TrigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(TrigPin, LOW); 

cm = pulseIn(EchoPin, HIGH) / 58.0; 
cm = (int(cm * 100.0)) / 100.0; 
if (cm>=2 && cm<=10)
digitalWrite(13, HIGH);
}
```

* Photodiode 

In simple terms, when the sensor detects light, its resistance changes. The stronger light in the surrounding environment, the lower the resistance value the photo diode will read. So in my project,When a hand approaches, the photo diode detects the light change and triggers the light, 


![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/033939y1vgrl92gib1eobf.jpg)

```arduino
int LED = 13;  
int val = 0;
void setup(){ pinMode(LED,OUTPUT);Serial.begin(9600);
}
void loop(){
val = analogRead(0);
Serial.println(val);
if(val<1000){ 
digitalWrite(LED,LOW); }else{ digitalWrite(LED,HIGH); } delay(10);  
}
```

* Combine All the Input and Output Together
[1578897809945370 on Vimeo](https://vimeo.com/385280429)


## Work Follow
* Determine the size of the hexagon and the number of LEDs on it.

![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/5CCDE613-6674-4636-92B4-3E0226A86E86.png)
Size 1: Side Length 10 cm with 12 LEDs

![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/2C4C8664-5A50-4D0C-9DA9-9E97FCA3E78B.png)
Size 2: Side Length 5 cm with 24 LEDs

Finally, I decided to use the size 2.

* Determine the size of the entire light box according to the size of the hexagon, and Divide the box into parts for laser cutting. 

![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/577D950E-5AF6-4F54-ABC0-96B13C07BF14.png)

![](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/7EA6632A-546B-45D8-B6BF-8BC837DFC15F.png)












         
    

