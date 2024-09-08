#include <Arduino.h>

void setup()
{
	pinMode(1, OUTPUT);
}

void loop()
{
	for (int i = 0; i < 3; i++)
	{
		digitalWrite(1, HIGH);
		delay(100);
		digitalWrite(1, LOW);
		delay(100);
	}
	delay(200);
	for (int j = 0; j < 3; j++)
	{
		digitalWrite(1, HIGH);
		delay(500);
		digitalWrite(1, LOW);
		delay(500);
	}
	delay(200);
	for (int k = 0; k < 3; k++)
	{
		digitalWrite(1, HIGH);
		delay(100);
		digitalWrite(1, LOW);
		delay(100);
	}
	delay(500);
}
