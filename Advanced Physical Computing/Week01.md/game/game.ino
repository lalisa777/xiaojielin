
/*This is a simple version of the famous Simon Says game of 5 levels. 
  The buttons from A1 to A3 are used to insert the right sequence while A0 to start the game.
  When a wrong sequence is inserted all the leds will blink for a while very fast, and if the sequence is right, all the leds will blink once and then go into the next level.
  When players go through all these 5 levels, the leds will blink in sequence to celebrate the success.
  As the level increases, the difficulty increases. Not only does the number of leds increase, but the frequency of the blink will also increase.
 */
const int maxlevel=5;
int level = 1;
int LED[maxlevel];
int selectedLED[maxlevel];

int frequency = 1000;

void setup() 
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  if (level == 1)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    randomLED();
  }

  if (digitalRead(A0) == HIGH || level != 1)
  {
    playLED();    
    judgeLED();   
  }
}

void playLED()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  for (int i = 0; i < level; i++)
  {
    digitalWrite(LED[i], HIGH);
    delay(frequency);
    digitalWrite(LED[i], LOW);
    delay(200);
   }
}

void judgeLED()
{
  int flag = 0; 

  for (int i = 0; i < level; i++)
  {
    flag = 0;
    while(flag == 0)
    {
       if (digitalRead(A1) == HIGH)
       {
         digitalWrite(4, HIGH);
         selectedLED[i] = 4;
         flag = 1;
         delay(200);
         if (selectedLED[i] != LED[i])
         {
           wrong();
           return;
         }
        digitalWrite(4, LOW);
      }

      if (digitalRead(A2) == HIGH)
      {
        digitalWrite(3, HIGH);
        selectedLED[i] = 3;
        flag = 1;
        delay(200);
        if (selectedLED[i] != LED[i])
        {
          wrong();
          return;
        }
        digitalWrite(3, LOW);
      }

      if (digitalRead(A3) == HIGH)
      {
        digitalWrite(2, HIGH);
        selectedLED[i] = 2;
        flag = 1;
        delay(200);
        if (selectedLED[i] != LED[i])
        {
           wrong();
           return;
        }
        digitalWrite(2, LOW);
      }

    }
  }
  right();
}

void randomLED()
{
  randomSeed(millis()); 

  for (int i = 0; i < maxlevel; i++)
  {
    LED[i] = random(2,5);
  }
}

void wrong()
{
  for (int i = 0; i < 2; i++)
  {
    for(int k=0 ; k<3 ; k++)
    {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      delay(200);
    }
    
  }
  level = 1;
  frequency = 1000;
}

void right()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(500);

  if (level < maxlevel)
  {
    level++;
    frequency -= 100;
  }
  else
  {
    for (int n=0 ; n<5 ; n++ )
    {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(3,HIGH);
      digitalWrite(4, LOW);
      delay(100);
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      delay(100);
      digitalWrite(2, LOW);
    }
    level=1;
  }
   
}
