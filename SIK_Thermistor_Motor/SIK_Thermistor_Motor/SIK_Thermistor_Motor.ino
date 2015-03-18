// create global variables
//create an int for temperature threshold
int setTemp;
//create a boolean for tracking the fan state
boolean fanState = 0;

//setup runs once on power up
void setup()
{
  //motor transistor connected to pin 3	
  pinMode(3,OUTPUT);	
  //start serial communication at 9600 bps
  Serial.begin(9600);
  //print user instructions
  Serial.println("Please set your temperature [ ]");
}

//loop runs over and over again
void loop()
{
	//if there is data available on the serial port
	if(Serial.availble()>0)
	{
	//create and set a variable for current temp from a thermistor on A0	
	int temp = analogRead(A0);
	//set the threshold temp by using whatever data is sent on the serial port
	setTemp = Serial.parseInt();
	
	//if current temp is greater than setTemp set fanState to HIGH
	if(temp > setTemp)
	{
		fanState = 1;
	}
	//else set fanState to LOW
	else
	{
		fanState = 0;
	}
	//digital write fanState to motor
	digitalWrite(3,fanState);
	//send feedback info over the serial port
	
	Serial.print(temp);
	Serial.print(" , ");
	Serial.println(fanState);
	//wait a bit for readability
	delay(100);
	}
}
