#ifndef FAHRENHEIT_TO_CELSIUS_H
#define FAHRENHEIT_TO_CELSIUS_H

#include "converter.h"
#include <string>
#include <iostream>

using namespace std;

class FahrenheitToCelsius : public Converter
{
public:
	virtual float convert(float current_measure);

private:
	const string FAHRENHEIT = "°F (Fahrenheit)";
	const string CELSIUS = "°C (Celsius)";
};

#endif // FAHRENHEIT_TO_CELSIUS_H
