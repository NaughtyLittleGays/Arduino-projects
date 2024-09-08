#include <Arduino.h>

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as an output
	pinMode(1, OUTPUT);
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
	digitalWrite(1, LOW);
	delay(400);						// Wait for 1 second
	digitalWrite(LED_BUILTIN, LOW); // Turn off the built-in LED
	digitalWrite(1, HIGH);
	delay(400); // Wait for 1 second
}
