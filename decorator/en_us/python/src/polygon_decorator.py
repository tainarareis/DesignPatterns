from geometric import Geometric
"""
    Describes properties of a certain class of objects,
    Polygons have the same way to calculate perimeter.
"""
class PolygonDecorator(Geometric):

    def __init__(self, sides = []):
        self.sides = sides

    def calculate_perimeter(self):
        self.perimeter = 0
        for side in self.sides:
            self.perimeter = self.perimeter + side

        print("Perimeter = " + str(self.perimeter))
