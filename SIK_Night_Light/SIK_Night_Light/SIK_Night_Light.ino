//set global variables

//set val is the ambient light reading from light sensor
int setVal;

//set sensitivity level of the light sensor
int sensitivity = 10;

//setup runs once
void setup()
{
 //set pin 9 to output	
 pinMode(9,OUTPUT);
 //set setVal to the initial reading from light sensor on pin A1
 setVal = analogRead(A1);
}

void loop()
{
 //create a local variable called currentVal which is the live reading of the light sensor	
 int currentVal = analogRead(A1); 

//if the currentVal is less than the initial val give or take a bit
 if(currentVal < setVal - sensitivity )
 {
 //turn on the LED on pin 9	
  digitalWrite(9,HIGH);
 }
 
//if its not less than initial value 
else
 {
 //turn off the LED on pin 9	
 digitalWrite(9,LOW);
 }
}