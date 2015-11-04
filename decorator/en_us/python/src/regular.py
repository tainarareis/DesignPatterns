from polygon_decorator import PolygonDecorator
"""
    An regular Polygon have the restriction of that all
    sides have same lenght
"""
class Regular(PolygonDecorator):

    def valid(self):
        first_side = self.sides[0]
        for side in self.sides:
            if side is not first_side:
                return False
            else:
                pass
        # If all sides are equals
        return True
