//setup runs once when powered up
void setup()
{
  //RGB LED with red, green and blue attached to pins 9,10 and 11	
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

//loop runs over and over again
void loop()
{
//create 3 local variables one for each color value
//red is set to potentiometer on A0
int r= analogRead(A0); 
//green is set to potentiometer on A1
int g= analogRead(A1);
//blue is set to potentiometer on A2
int b= analogRead(A2);

//write color values to each PWM pin on for the RGB LED
//values are divdied by 4 to scale the range from 0-1023 to 0-255
analogWrite(9,r/4);
analogWrite(10,g/4);
analogWrite(11,b/4);
}