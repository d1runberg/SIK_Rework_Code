//setup runs once at the begining of your sketch
void setup()
{
pinMode(13,OUTPUT);	//set pin 13 as an output
}

//loop runs over and over again until you turn the power off!
void loop()
{
//Turn 13 on or "HIGH"
digitalWrite(13,HIGH);	
//wait 1 second (1000 millis)
delay(1000);	
//Turn 13 off or "LOW"
digitalWrite(13,LOW);	
//wait 1 second
delay(1000);	
}