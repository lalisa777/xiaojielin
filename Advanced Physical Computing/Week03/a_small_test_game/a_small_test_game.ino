int btn=5;
int state1 = 0; 
int state2 = 0; 
int stage=0;
int q;
int finalAnswer;
char answer;


void setup() {
   Serial.begin(9600);
   pinMode(btn,INPUT);
}

void loop() {
  state1=digitalRead(btn);
  
  if(state1==1 and state2==0 and stage==0)
  {
    Serial.println("What's your name?");
    stage=stage+1;
  }
  state2=state1;
  if(state1!=state2)
  {
    delay(30);
  }
  if(Serial.available()>0 and stage == 1)
  {
    Serial.print("Hello,");  
    String s = Serial.readString(); 
    Serial.print(s);  
    Serial.println("Test to see how big a house you can buy?");  
    Serial.println("******************************************");
    Serial.println("If you want to draw a circle on a piece of white paper, which color will you choose?");
    Serial.println("A.BLUE  B.PINK  C.YELLOW");
    stage=stage+1;
  }
  if(Serial.available()>0 and stage == 2)
  {
    stage=stage+1;
    answer = Serial.read(); 
    if( answer == 'A' or answer == 'a')
    {
      q=1;
    }
    if( answer == 'B' or answer == 'b')
    {
      q=2;
     }
    if( answer == 'C' or answer == 'c')
    {
      q=3;
     }
     question();
   }
   if(Serial.available()>0 and stage == 3)  
   {
    answer = Serial.read(); 
     if( answer == 'A' or answer == 'a')
     {
       if(q==3)
       {
         finalAnswer=2;
       }
        else
        {
          finalAnswer=1;
        }
        result();
     }
     if( answer == 'B' or answer == 'b')
     {
      if(q==1)
      {
        finalAnswer=1;
      }
       if(q==2)
      {
        finalAnswer=3;
      }
       if(q==3)
      {
        finalAnswer=2;
      }
      result();
     }
     if( answer == 'C' or answer == 'c')
     {
       if(q!=3)
      {
        finalAnswer=3;
      }
      else
      {
        finalAnswer=2;
      }
      result();
     }
     
   }
}

void question()
{
  if(q==1)
  {
     Serial.println("What does a circle remind you of?") ;
     Serial.println("A.WHEEL  B.LIFE  C.PIZZA");    
  }
  if(q==2)
  {
    Serial.println("Which of the following shapes can be used to describe your personality?") ;
    Serial.println("A.CIRCLE  B.TRIANGLE  C.SQUARE");
  }
  if(q==3)
  {
    Serial.println("What kind of triangle is the most stable?") ;
    Serial.println("A.EQUILATERAL TRIANGLE  B.ISOSCELES TRIANGLE  C.RIGHT-ANGLED TRIANGLE"); 
  }
  
}
 
  void result()
  {
   Serial.println("******************************************");
   if(finalAnswer == 1)
    {
       Serial.println("You will buy an old-fashioned house, about 56 square meters.") ;
    }
  
   if(finalAnswer == 2 )
    {
      Serial.println("You will buy a finely furnished apartment, about 116 square meters.") ;
    }
   if(finalAnswer == 3)
    {
      Serial.println("You will buy an Irish Castle, about 10 acres.") ;
    }
    Serial.println("Press the button and play again.");
    Serial.println("******************************************");
     stage=0;
     while(Serial.available() > 0)
     Serial.read(); 
  }

 
  
 
