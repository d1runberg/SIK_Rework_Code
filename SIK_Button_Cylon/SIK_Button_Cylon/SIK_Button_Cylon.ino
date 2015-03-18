void setup()
{
//pins 13 through 8 as outputs
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(3, OUTPUT);
//pin 2 set as input (button)
 pinMode(2,INPUT);
}

void loop()
{
 boolean buttonState = digitalRead(2);
 
 //if button state is high, do a slow cylon
 if(buttonState == 1)
  {
	//for loop that cycles the on and off of LEDs 3 through 8
   for(int i= 8; i>=4; i--)
   {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);
   }
}
//else, if button state is low, do a fast cylon
 else
 {
 	//for loop that cycles the on and off of LEDs 3 through 8
    for(int i= 8; i>=4; i--)
   {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(100);
   }
 }
}
