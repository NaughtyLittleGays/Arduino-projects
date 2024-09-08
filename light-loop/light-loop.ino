
int light_sensor = A3;

void setup()
{
	Serial.begin(9600); // begin Serial Communication
	pinMode(1, OUTPUT);
}

void loop()
{
	int raw_light = analogRead(light_sensor);    // read the raw value from light_sensor pin (A3)
	int light = map(raw_light, 0, 1023, 0, 100); // map the value from 0, 1023 to 0, 100

	if (light > 50)
	{
		digitalWrite(1, HIGH);
	}
	else
	{
		digitalWrite(1, LOW);
	}
}