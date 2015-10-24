from converter import Converter

class CelsiusToFahrenheit(Converter):
		
	CELSIUS = "*C (Celsius)"
	FAHRENHEIT = "*F (Fahrenheit)"

	def convert(self, current_measure):
		
		converted_measure = (current_measure * (9.0/5.0)) + 32.0
		
		print "%.3f %s = %.3f %s" % (current_measure, self.CELSIUS,
			converted_measure, self.FAHRENHEIT)

		return converted_measure