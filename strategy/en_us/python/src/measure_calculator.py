"""Converter: A pseudo-Interface for the strategies"""
from converter import Converter

class MeasureCalculator:
	"""
	Class responsible to redirect the responsability to convert a measure
	to a more suitable object, according to the Strategy Pattern.
	"""

	def convert_measure(self, current_measure, converter):
		"""
		Redirect the responsability to convert a measure to a
		Converter object.
		"""
		convertedMeasure = converter.convert(current_measure)
