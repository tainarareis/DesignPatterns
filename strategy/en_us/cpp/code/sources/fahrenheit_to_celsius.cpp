#include "fahrenheit_to_celsius.h"

float
FahrenheitToCelsius::convert(float current_measure)
{
	float converted_measure = (current_measure - 32.0) * (5.0/9.0);

	cout << current_measure << FAHRENHEIT << " = " << converted_measure << CELSIUS << "\n";

	return converted_measure;
}
