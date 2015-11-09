"""Converter: A pseudo-Interface for the strategies"""
from converter import Converter

class CelsiusToFahrenheit(Converter):
	"""
	Class responsible to convert a measure in Celsius into Fahrenheit.
	It is a Concrete Strategy of the context.
	"""

	CELSIUS = "*C (Celsius)"
	FAHRENHEIT = "*F (Fahrenheit)"

	def convert(self, current_measure):
		"""
		Convert a measure in Celsius into Fahrenheit.
		For more information:
			https://en.wikipedia.org/wiki/Conversion_of_units_of_temperature
		"""

		converted_measure = (current_measure * (9.0/5.0)) + 32.0

		print "%.3f %s = %.3f %s" % (current_measure, self.CELSIUS,
			converted_measure, self.FAHRENHEIT)

		return converted_measure
