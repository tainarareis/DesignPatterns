from measure_calculator import MeasureCalculator
from celsius_to_fahrenheit import CelsiusToFahrenheit
from fahrenheit_to_celsius import FahrenheitToCelsius

ANTARCTICA_CELSIUS = -89.6
BRASILIA_CELSIUS = 36.4
MOON_FAHRENHEIT = -387.0
FORT_WAYNE_FAHRENHEIT = 38.0

calculator = MeasureCalculator()

print "Converting Celsius to Fahrenheit:"
calculator.convert_measure(ANTARCTICA_CELSIUS, CelsiusToFahrenheit())
calculator.convert_measure(BRASILIA_CELSIUS, CelsiusToFahrenheit())

print "Converting Fahrenheit to Celsius:"
calculator.convert_measure(MOON_FAHRENHEIT, FahrenheitToCelsius())
calculator.convert_measure(FORT_WAYNE_FAHRENHEIT, FahrenheitToCelsius())
