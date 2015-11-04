from polygon_decorator import PolygonDecorator
"""
    Calculates perimeter like an Polygon, but your way
    to calculate area is especial.
"""
class Rectangle(PolygonDecorator):

    def calculate_area(self):
        self.area = (self.sides[0] * self.sides[1])
        print("Area = " + str(self.area))
