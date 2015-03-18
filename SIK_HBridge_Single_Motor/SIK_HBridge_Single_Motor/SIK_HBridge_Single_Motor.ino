void setup()
{
//enable pin for the H-Bridge, used to control the motor speed	
pinMode(11,OUTPUT);
//Direction login pin 1
pinMode(12,OUTPUT);
//Direction login pin 2
pinMode(13,OUTPUT);
}

void loop()
{
 //spin the motor at full speed	
 analogWrite(11,255);
 //direction set with 12 HIGH and 13 LOW
 digitalWrite(12,HIGH);
 digitalWrite(13,LOW);
 //wait 2 seconds
 delay(2000);
 //brake motor using two logic pins in same state
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 //wait 1 second
 delay(1000);
 //change direction
  digitalWrite(12,LOW);
 digitalWrite(13,HIGH);
 //wait 2 seconds
 delay(2000);
 //brake motors
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 //wait 1 second
 delay(1000);
}


