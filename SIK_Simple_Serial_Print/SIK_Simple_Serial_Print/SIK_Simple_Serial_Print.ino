void setup()
{
  Serial.begin(9600);
  Serial.println("Hello, What is your Name?");
}

void loop()
{
	if(Serial.available()>0)
	{
		String name = Serial.readString();
		Serial.print("hello ");
		Serial.print(name);
		Serial.println(" ,It's nice to meet you!");
	}
}
