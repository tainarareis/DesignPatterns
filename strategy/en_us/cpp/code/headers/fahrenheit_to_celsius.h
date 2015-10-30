/**
 *	@file fahrenheit_to_celsius.cpp
 *	Class responsible to convert a measure in Fahrenheit into Celsius.
 *	It is a Concrete Strategy of the context.
 */

// Include Guards Preprocessors
#ifndef FAHRENHEIT_TO_CELSIUS_H
#define FAHRENHEIT_TO_CELSIUS_H

#include "converter.h" // Header file needed to inherit Converter.
#include <string> // Header library needed to use the string type.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class FahrenheitToCelsius : public Converter
{
public:
	/**
	 *	Convert a measure in Fahrenheit into Celsius.
	 *
	 *	@param currentMeasure	a measure in Fahrenheit.
	 *	@return	the measure converted into Celsius
	 */
	virtual float convert(float current_measure);

private:
	const string FAHRENHEIT = "°F (Fahrenheit)"; /**<
		Fahrenheit suffix string constant. */
	const string CELSIUS = "°C (Celsius)"; /**<
		Celsius suffix string constant. */
};

#endif // FAHRENHEIT_TO_CELSIUS_H
