//setup runs once at power up
void setup()
{
//transistor connected to pin 3 for control	
   pinMode(3,OUTPUT);	
}

//loop runs over and over again
void loop()
{
  //turn motor on for 1 second	
  digitalWrite(3,HIGH);
  delay(1000);
  //turn motor off for 1 second
  digitalWrite(3,LOW);
  delay(1000);
}
