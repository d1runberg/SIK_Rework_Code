
//setup runs once on powerup
void setup()
{
//pins 4 through 8 as outputs
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(4, OUTPUT);
//pin 2 set as input (button)
 pinMode(2,INPUT);
}

//loop runs over and over again
void loop()
{
 boolean buttonState = digitalRead(2);
 
 if(buttonState == 1)
  {
	//for loop cycles through blinking pins 4 through 8
   for(int i= 8; i>=4; i--)
   {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);
   }
}
 else
 {
    for(int i= 8; i>=4; i--)
   {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(100);
   }
 }
}