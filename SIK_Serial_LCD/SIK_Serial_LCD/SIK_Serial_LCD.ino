//include software serial library file
#include <SoftwareSerial.h>

// Attach the serial display's RX line to digital pin 2
// pin 2 = TX, pin 3 = RX (unused)
SoftwareSerial mySerial(3,2); 

//setup runs once on power up
void setup()
{
  // set up serial port for 9600 baud
  mySerial.begin(9600); 
   // wait for display to boot up
  delay(500);
  // move cursor to beginning of first line
  mySerial.write(254); 
  mySerial.write(128);
  // clear display
  mySerial.write("                "); 
  mySerial.write("                ");
}

//loop runs over and over again
void loop()
{
  // move cursor to beginning of first line
  mySerial.write(254); 
  mySerial.write(128);
  //print hello world to Serial LCD
  mySerial.write("Hello World!");
  //wait 2 seconds
  delay(2000);
  //clear serial LCD display
  mySerial.write("                ");
  mySerial.write("                ");
  // move cursor to beginning of first line
   mySerial.write(254); 
  mySerial.write(128);
  //print goodbye world to serial LCD
  mySerial.write("Goodbye World!");
  //wait 2 seconds
  delay(2000);
  //clear Serial LCD display
  mySerial.write("                ");
  mySerial.write("                ");
}