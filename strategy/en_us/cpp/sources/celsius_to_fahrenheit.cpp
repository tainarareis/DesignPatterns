#include "celsius_to_fahrenheit.h"

float
CelsiusToFahrenheit::convert(float current_measure)
{
	/*
	 *	Converting Celsius to Fahrenheit.
	 *	For more information:
	 *		https://en.wikipedia.org/wiki/Conversion_of_units_of_temperature
	 */
	float converted_measure = (current_measure * (9.0/5.0)) + 32.0;

	/*
	 *	Inform the conversion as follows: <X>°C (Celsius) = <Y>°F (Fahrenheit).
	 *	Used to show a result of an application using Strategy Pattern.
	 */
	cout << current_measure << CELSIUS << " = "
			<< converted_measure << FAHRENHEIT << endl;

	return converted_measure;
}
