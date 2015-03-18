void setup()
{
//pins 8 through 3 as outputs
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(3, OUTPUT);
}

void loop()
{
  //loop through pins 8 through 3 using a for loop	
  for(int i= 8; i>=3; i--)
  {
  	//turn pin i on
    digitalWrite(i,HIGH);
    //wait half second
    delay(500);
    //turn off pin i
    digitalWrite(i,LOW);
    //wait half second
    delay(500);
  }
}
