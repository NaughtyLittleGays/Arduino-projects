
int light_sensor = A3;

void setup()
{
	Serial.begin(9600); // begin Serial Communication
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
	int raw_light = analogRead(light_sensor);	 // read the raw value from light_sensor pin (A3)
	int light = map(raw_light, 0, 1023, 0, 100); // map the value from 0, 1023 to 0, 100

	// Serial.print("Light level: ");
	// Serial.println(light); // print the light value in Serial Monitor

	// delay(1000); // add a delay to only read and print every 1 second

	if (light > 50)
	{
		digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
		digitalWrite(1, LOW);
		delay(400);						// Wait for 1 second
		digitalWrite(LED_BUILTIN, LOW); // Turn off the built-in LED
		digitalWrite(1, HIGH);
		delay(400); // Wait for 1 second
	}
	else
	{
		digitalWrite(1, LOW);
		digitalWrite(LED_BUILTIN, LOW);
	}
}