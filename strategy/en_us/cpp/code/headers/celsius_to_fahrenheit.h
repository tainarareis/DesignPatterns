#ifndef CELSIUS_TO_FAHRENHEIT_H
#define CELSIUS_TO_FAHRENHEIT_H

#include "converter.h"
#include <string>
#include <iostream>

using namespace std;

class CelsiusToFahrenheit : public Converter
{
public:
	virtual float convert(float current_measure);

private:
	const string CELSIUS = "°C (Celsius)";
	const string FAHRENHEIT = "°F (Fahrenheit)";
};

#endif // CELSIUS_TO_FAHRENHEIT_H
