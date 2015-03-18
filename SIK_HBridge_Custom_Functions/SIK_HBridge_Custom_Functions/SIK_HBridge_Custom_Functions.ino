//setup runs once on powe up
void setup()
{
  //pin 11 as enable pin	
  pinMode(11,OUTPUT);
  //pins 12 and 13 as direction logic pins
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

//loop runs over and over again
void loop()
{   
	//forward for 1 second
	forward(1000);
	//brake for 1 second
	brake(1000);
	//reverse for 1 second
	reverse(1000);
	//brake for 1 second
	brake(1000);

}

//custom functions are set up similar to your setup or loop functions. 
//they have the data type that they return, in this case all void, which
//means they return nothing. They then have a name of the function and a 
//set of parenthesis. The parameters inside of the parenthesis have a given 
//data type and a name. You can then use that as a local variable within your
//custom function. 

//to use a custom function you can then call it within your setup or loop functions
//and pass it whatever parameters that you have setup. In the example of the
//brake function you pass it a wait time which is then passed to the delay function.

//create a brake function with 1 parameter of wait
void brake(int wait)
{
  //pull both logic pins low to brake	
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  //wait for "wait" amount of time which is passed to the brake function as a 
  //paramter
  delay(wait);
}

//create a forward function with 1 parameter of time
void forward(int time)
{
  //write digital logic for motor forward	
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  // delay for "time" amount of milliseconds
  delay(time);
}

//create a custom reverse function
void reverse(int time)
{
  //write digital logic for reverse	
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  //delay amount of "time" in milliseconds
  delay(time);
}
