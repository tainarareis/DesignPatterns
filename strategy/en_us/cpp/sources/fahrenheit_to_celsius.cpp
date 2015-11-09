#include "fahrenheit_to_celsius.h"

float
FahrenheitToCelsius::convert(float current_measure)
{
	/*
	 *	Converting Fahrenheit to Celsius.
	 *	For more information:
	 *		https://en.wikipedia.org/wiki/Conversion_of_units_of_temperature
	 */
	float converted_measure = (current_measure - 32.0) * (5.0/9.0);

	/*
	 *	Inform the conversion as follows: <X>°F (Fahrenheit) = <Y>°C (Celsius).
	 *	Used to show a result of an application using Strategy Pattern.
	 */
	cout << current_measure << FAHRENHEIT << " = "
			<< converted_measure << CELSIUS << endl;

	return converted_measure;
}
