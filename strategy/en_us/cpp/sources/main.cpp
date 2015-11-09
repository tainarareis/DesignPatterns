#include "measure_calculator.h"
#include "celsius_to_fahrenheit.h"
#include "fahrenheit_to_celsius.h"

#include <iostream> // Header library needed to use input/output methods.
using namespace std; // Setting use of std to avoid the use of the prefix.

/**
 *	Main program with examples of application using Strategy Pattern.
 *
 *	@see	MeasureCalculator for more information about the context.
 */
int main()
{
	/*
	 *	Examples of temperature measure.
	 */
	const float ANTARCTICA_CELSIUS = -89.6;
	const float BRASILIA_CELSIUS = 36.4;
	const float MOON_FAHRENHEIT = -387.0;
	const float FORT_WAYNE_FAHRENHEIT = 38.0;

	/*
	 *	The object calculator will be used to convert the measures.
	 *	The Converter-type objects will be used to determine the strategy of conversion.
	 */
	MeasureCalculator calculator;
	CelsiusToFahrenheit celsius_to_fahrenheit_converter;
	FahrenheitToCelsius fahrenheit_to_celsius_converter;

	/*
	 *	Using the method convertMeasure, with a measure and an instance of
	 *	a Converter, the conversion of the measure is returned and printed.
	 *	The value returned from the method is not used in this the example.
	 */
	cout << "Converting Celsius to Fahrenheit:" << endl;
	calculator.convert_measure(ANTARCTICA_CELSIUS, &celsius_to_fahrenheit_converter);
	calculator.convert_measure(BRASILIA_CELSIUS, &celsius_to_fahrenheit_converter);

	cout << "Converting Fahrenheit to Celsius:" << endl;
	calculator.convert_measure(MOON_FAHRENHEIT, &fahrenheit_to_celsius_converter);
	calculator.convert_measure(FORT_WAYNE_FAHRENHEIT, &fahrenheit_to_celsius_converter);

	return 0;
}
