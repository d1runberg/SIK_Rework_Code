
//setup runs once when the Arduino is powered up
void setup()
{
//pins 8 and 7 as outputs
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
}
//loop runs over and over again
void loop()
{
//pin 8 on and 7 off
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
//wait 500 ms
delay(500);
//pin 8 off and 7 on
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
//wait 500ms
delay(500);
}