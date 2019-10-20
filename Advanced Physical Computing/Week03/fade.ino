int led=9; // analogWrite()  with a "~" sign
int brightness=255;
int fade=5;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  analogWrite(led,brightness);
  brightness=brightness-fade;
  if(brightness<=0||brightness>=255){
    fade=-fade;
  }//the brightness of led is [0,255]
 delay(30);
}
