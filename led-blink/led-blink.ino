#include <Arduino.h>

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as an output
	pinMode(1, INPUT);
}

void loop()
{
	// digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
	// delay(1000);                     // Wait for 1 second
	// digitalWrite(LED_BUILTIN, LOW);  // Turn off the built-in LED
	// delay(1000);                     // Wait for 1 second
	// for (int i = 0; i < 3; i++)
	// {
	//  digitalWrite(1, HIGH);
	//  delay(100);
	//  digitalWrite(1, LOW);
	//  delay(100);
	// }
	// delay(200);
	// for (int j = 0; j < 3; j++)
	// {
	//  digitalWrite(1, HIGH);
	//  delay(500);
	//  digitalWrite(1, LOW);
	//  delay(500);
	// }
	// delay(200);
	// for (int k = 0; k < 3; k++)
	// {
	//  digitalWrite(1, HIGH);
	//  delay(100);
	//  digitalWrite(1, LOW);
	//  delay(100);
	// }
	// delay(500);

	// digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
	// digitalWrite(1, LOW);
	// delay(400);                      // Wait for 1 second
	// digitalWrite(LED_BUILTIN, LOW); // Turn off the built-in LED
	// digitalWrite(1, HIGH);
	// delay(400); // Wait for 1 second

	int button = digitalRead(1);
	Serial.println(button);
	delay(1000);
}
