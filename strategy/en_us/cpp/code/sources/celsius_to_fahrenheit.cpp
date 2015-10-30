#include "celsius_to_fahrenheit.h"

float
CelsiusToFahrenheit::convert(float current_measure)
{
	float converted_measure = (current_measure * (9.0/5.0)) + 32.0;

	cout << current_measure << CELSIUS << " = " << converted_measure << FAHRENHEIT << "\n";

	return converted_measure;
}
