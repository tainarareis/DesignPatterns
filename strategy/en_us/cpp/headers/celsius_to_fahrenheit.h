/**
 *	@file celsius_to_fahrenheit.cpp
 *	Class responsible to convert a measure in Celsius into Fahrenheit.
 *	It is a Concrete Strategy of the context.
 */

// Include Guards Preprocessors.
#ifndef CELSIUS_TO_FAHRENHEIT_H
#define CELSIUS_TO_FAHRENHEIT_H

#include "converter.h" // Header file needed to inherit Converter.
#include <string> // Header library needed to use the string type.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class CelsiusToFahrenheit : public Converter
{
public:
	/**
	 *	Convert a measure in Celsius into Fahrenheit.
	 *
	 *	@param currentMeasure	a measure in Celsius.
	 *	@return	the measure converted into Fahrenheit
	 */
	virtual float convert(float current_measure);

private:
		const string CELSIUS = "°C (Celsius)"; /**<
			Celsius suffix string constant. */
		const string FAHRENHEIT = "°F (Fahrenheit)"; /**<
			Fahrenheit suffix string constant. */
};

#endif // CELSIUS_TO_FAHRENHEIT_H
