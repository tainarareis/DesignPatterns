from geometric import Geometric
from math import *

""" Basic implementation of Geometric """
class Circle(Geometric):
    """
    Needs a radius to be instantiated,
    because all operations must use this property
    """
    def __init__(self, radius):
        self.radius = radius

    def calculate_area(self):
        self.area = (pi * self.radius ** 2)
        print("Area = " + str(self.area))

    def calculate_perimeter(self):
        self.perimeter = (2 * pi * self.radius)
        print("Perimeter = " + str(self.perimeter))
