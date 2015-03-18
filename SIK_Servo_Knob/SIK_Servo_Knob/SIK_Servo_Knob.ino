//include the servo library file
#include <Servo.h>

//create a library object called myServo
Servo myServo;

//setup runs once
void setup()
{
  //attach myServo to pin 3	
  myServo.attach(3);
}

void loop()
{
  //create a local variable called val which is equal to value from A3	
  int val = analogRead(A3);
  //map the value of val which is from 0 to 1023 to 0 to 180
  val = map(val,0,1023,0,180);
  //write val to the servo (0-180)
  myServo.Write(val);
  //wait a tiny bit to give the servo some time to move
  delay(10);
}
