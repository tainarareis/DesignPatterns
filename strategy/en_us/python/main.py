"""Examples of application using Strategy Pattern."""

"""
MeasureCalculator: The Context which calls for a Strategy.
CelsiusToFahrenheit and FahrenheitToCelsius: Strategies.
"""
from measure_calculator import MeasureCalculator
from celsius_to_fahrenheit import CelsiusToFahrenheit
from fahrenheit_to_celsius import FahrenheitToCelsius

"""
Example of temperature measures.
"""
ANTARCTICA_CELSIUS = -89.6
BRASILIA_CELSIUS = 36.4
MOON_FAHRENHEIT = -387.0
FORT_WAYNE_FAHRENHEIT = 38.0

"""The object calculator will be used to convert the measures."""
calculator = MeasureCalculator()

"""
Using the method convert_measure, with a measure and an instance of
a Converter, the conversion of the measure is returned and printed.

The value returned from the method is not used in this the example.
"""
print "Converting Celsius to Fahrenheit:"
calculator.convert_measure(ANTARCTICA_CELSIUS, CelsiusToFahrenheit())
calculator.convert_measure(BRASILIA_CELSIUS, CelsiusToFahrenheit())

print "Converting Fahrenheit to Celsius:"
calculator.convert_measure(MOON_FAHRENHEIT, FahrenheitToCelsius())
calculator.convert_measure(FORT_WAYNE_FAHRENHEIT, FahrenheitToCelsius())
