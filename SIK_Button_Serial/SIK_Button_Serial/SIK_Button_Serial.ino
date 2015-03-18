
//setup runs once on powerup
void setup()
{
 //set pin 13 as output (LED)
 pinMode(13,OUTPUT);
 //set pin 2 as an input (Button)
 pinMode(2,INPUT);
 //Start serial communication at 9600 bits per second
 Serial.begin(9600);
}

//loop repeats over and over
void loop()
{
 //create a boolean variable called buttonState and assign it to the input of pin 9
 boolean buttonState = digitalRead(12);
 //write buttonState to pin 13 to control LED on pin 13
 digitalWrite(13, buttonState);
 //print buttonState and millis to the Serial Monitor
 Serial.print(buttonState);
 Serial.print(" , ");
 //use println to end with a carriage return
 Serial.println(millis());
 //wait 10 ms for debounce
 delay(10); 
}
