"""Converter: A pseudo-Interface for the strategies"""
from converter import Converter

class FahrenheitToCelsius(Converter):
	"""
	Class responsible to convert a measure in Fahrenheit into Celsius.
	It is a Concrete Strategy of the context.
	"""

	FAHRENHEIT = "*F (Fahrenheit)"
	CELSIUS = "*C (Celsius)"

	def convert(self, current_measure):
		"""
		Convert a measure in Fahrenheit into Celsius.
		For more information:
			https://en.wikipedia.org/wiki/Conversion_of_units_of_temperature
		"""
		converted_measure = (current_measure - 32.0) * (5.0/9.0)

		print "%.3f %s = %.3f %s" % (current_measure, self.FAHRENHEIT,
			converted_measure, self.CELSIUS)

		return converted_measure
