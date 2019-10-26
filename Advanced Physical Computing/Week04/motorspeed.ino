int switchPin1 = 7;
int switchPin2 = 8;
int motorSpeed = 9;
int a = 0;

void setup() {
 pinMode(switchPin1,INPUT);
 pinMode(switchPin2,INPUT);
 pinMode(motorSpeed,OUTPUT);
}

void loop() {
  if(LOW == digitalRead(switchPin1)){
    a = a+10;
    analogWrite(motorSpeed,a);
    delay(1000);
  }

  if(LOW == digitalRead(switchPin2)){
    a = a-10;
    analogWrite(motorSpeed,a);
    delay(1000);
  }
}
