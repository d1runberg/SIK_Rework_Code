//setup runs once on power up
void setup()
{
  //emitter connected to pin 13	
  pinMode(13,OUTPUT);
  //detector connected to pin 4
  pinMode(4,INPUT);
  //alert LED connected to pin 9
  pinMode(9,OUTPUT);
}

void loop()
{   
	//turn on IR emmiter
	digitalWrite(13,HIGH);
	//set a boolean local variable to digital read of the IR detector on pin 4
	boolean detect = digitalRead(4);
	
	//if the IR detect is LOW, something is breaking the beam
	if(detect == LOW)
	{
	  //turn on LED on pin 9	
	  digitalWrite(9,HIGH);	
	}
	else
	{
	  //keep LED on pin 9 off	
	  digitalWrite(9,LOW)
	}
}
