
#include <SoftwareSerial.h>

// Attach the serial display's RX line to digital pin 2
SoftwareSerial mySerial(3,2); // pin 2 = TX, pin 3 = RX (unused)

void setup()
{
  mySerial.begin(9600); // set up serial port for 9600 baud
  delay(500); // wait for display to boot up
  
  mySerial.write(254); // move cursor to beginning of first line
  mySerial.write(128);

  mySerial.write("                "); // clear display
  mySerial.write("                ");
}

void loop()
{
  int temp = analogRead(A0);
 
  mySerial.write(254); // move cursor to beginning of first line
  mySerial.write(128);
  mySerial.write("Temperature:");
  mySerial.write(192);
  mySerial.write(temp);
  while(1); // wait forever
}

