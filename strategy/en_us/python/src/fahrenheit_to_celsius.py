"""Converter: A pseudo-Interface for the strategies"""
from converter import Converter

class FahrenheitToCelsius(Converter):

	FAHRENHEIT = "*F (Fahrenheit)"
	CELSIUS = "*C (Celsius)"

	def convert(self, current_measure):

		converted_measure = (current_measure - 32.0) * (5.0/9.0)

		print "%.3f %s = %.3f %s" % (current_measure, self.FAHRENHEIT,
			converted_measure, self.CELSIUS)

		return converted_measure
