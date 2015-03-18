//setup runs once on powerup
void setup()
{
 //set pin 3 as the control pin for the transistor	
 pinMode(3,OUTPUT);
 //start serial communication at 9600 bps
 Serial.begin(9600);
 //print instructions for user
 Serial.println("Input motor Speed [0-255]");
}

//loop runs over and over again
void loop()
{
//if there is a value coming over the serial port...
 if(Serial.available()>0)
  {
	//create a local variable for speed and set it to whatever int coming from the serial port
    int spd = Serial.parseInt();
		//set the speed of the motor to spd variable
    analogWrite(3,spd);
    Serial.print("Motor speed set to: ");
    Serial.println(spd);
    Serial.println();
    Serial.println();
    Serial.println("A new speed?");
 	}
}