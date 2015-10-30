#include "measure_calculator.h"
#include "celsius_to_fahrenheit.h"
#include "fahrenheit_to_celsius.h"

int main()
{
	const float ANTARCTICA_CELSIUS = -89.6;
	const float BRASILIA_CELSIUS = 36.4;
	const float MOON_FAHRENHEIT = -387.0;
	const float FORT_WAYNE_FAHRENHEIT = 38.0;

	MeasureCalculator calculator;
	CelsiusToFahrenheit celsius_to_fahrenheit_converter;
	FahrenheitToCelsius fahrenheit_to_celsius_converter;

	printf("Converting Celsius to Fahrenheit:\n");
	calculator.convert_measure(ANTARCTICA_CELSIUS, &celsius_to_fahrenheit_converter);
	calculator.convert_measure(BRASILIA_CELSIUS, &celsius_to_fahrenheit_converter);

	printf("Converting Fahrenheit to Celsius:\n");
	calculator.convert_measure(MOON_FAHRENHEIT, &fahrenheit_to_celsius_converter);
	calculator.convert_measure(FORT_WAYNE_FAHRENHEIT, &fahrenheit_to_celsius_converter);

	return 0;
}
