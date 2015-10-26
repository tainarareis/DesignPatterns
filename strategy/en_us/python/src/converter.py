"""
There are a lot of ways to implement a Strategy Pattern in Python.
Since Interface does not exist in Python language, this example of
Strategy Pattern creates a Class with an "empty" method which will
be inherited by the classes which will implement that method.
"""

class Converter:
	"""
	The Context (measure_calculator) calls an Strategy (A class which
	inherit this class) to execute the action desirable (Convert a
	measure).
	"""

	def convert(current_measure):
		"""
		This method do nothing. The class which will inherit this class
		will be responsible to implement this method.
		"""
		pass
