//set global variables 

//val is the starting value for analogWrite
int val = 0;
//grow is the value with which you increment val by
int grow = 5;

//setup runs once on powerup
void setup()
{
  pinMode(9,OUTPUT);
}

//loop runs over and over again
void loop()
{
//with a for loop
for(int i= 0; i<=255; i++)
{
  analogWrite(9,i);
  delay(10);
}

for(int i= 255; i>=0; i--)
{
  analogWrite(9,i);
  delay(10);
}

//with a variable and an if() statement
/*

val = val+grow;

if(val<=0||val>=255)
{
  grow = grow*-1;
}
analogWrite(9,val);
delay(10);

*/
}
