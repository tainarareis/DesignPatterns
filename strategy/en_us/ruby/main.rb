require './celsius_fahrenheit'
require './measure_calculator'
require './fahrenheit_celsius'

# Measures to be converted
ANTARCTICA_CELSIUS = -89.6
BRASILIA_CELSIUS = 36.4
MOON_FAHRENHEIT = -387.0
FORT_WAYNE_FAHRENHEIT = 38.0

# Mode to converts celsius to fahrenheit
calculator = MeasureCalculator.new(CelsiusFahrenheit.new)

# print results in fahrenheit
calculator.convert_measure(ANTARCTICA_CELSIUS)
calculator.convert_measure(BRASILIA_CELSIUS)

# The calculator now changed your mode!

# Mode to converts fahrenheit to celsius
calculator = MeasureCalculator.new(FahrenheitCelsius.new)

# print results in celsius
calculator.convert_measure(MOON_FAHRENHEIT)
calculator.convert_measure(FORT_WAYNE_FAHRENHEIT)
