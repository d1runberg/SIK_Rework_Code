void setup()
{
//set pins 3 through 7 as outputs	
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
}

void loop()
{
   growBlink(100);	
}

//a custom function to animate the LEDs in a Night Rider patrdern 
//A single paramter is created which is the speed of the animation in 
//milliseconds. If a parameter is specified it needs to be called with
//the function when called in the main functions.
void myFunction(int speed)
{
	
}


void bounce(int speed)
{
	//a for loop that cycles through turning the LEDs on and off starting at 
	//3 and going through 7 using the parameter of speed as the delay timing for
	//the LED being on
	for(int i= 4; i<=8; i++)
	{
	digitalWrite(i,HIGH);
	delay(speed);
	digitalWrite(i,LOW);
	}
	
	//a for loop that cycles through turning the LEDs on and off starting at 
	//7 and going through 3 using the parameter of speed as the delay timing for
	//the LED being on
	for(int i= 8; i>=4;i--)
	{
	digitalWrite(i,HIGH);
	delay(speed);
	digitalWrite(i,LOW);	
	}
	
}

void growBlink(int speed)
{
	//a for loop that cycles through turning the LEDs on and off starting at 
	//3 and going through 7 using the parameter of speed as the delay timing for
	//the LED being on
	for(int i= 4; i<=8; i++)
	{
	digitalWrite(i,HIGH);
	delay(speed);
	
	}
	
	//a for loop that cycles through turning the LEDs on and off starting at 
	//7 and going through 3 using the parameter of speed as the delay timing for
	//the LED being on
	for(int i= 8; i>=4;i--)
	{
	digitalWrite(i,LOW);
	delay(speed);
	
	}
}
