#include <Arduino.h>

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as an output
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
	delay(1000);					 // Wait for 1 second
	digitalWrite(LED_BUILTIN, LOW);	 // Turn off the built-in LED
	delay(1000);					 // Wait for 1 second
}
