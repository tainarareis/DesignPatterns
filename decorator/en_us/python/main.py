from circle import Circle
from rectangle import Rectangle
from regular import Regular

print("Calculate circunference and area of circle with radius 3")
circle = Circle(3)
circle.calculate_area()
circle.calculate_perimeter()

sides = [2, 4, 2, 4]

print("\nCalculate area and perimeter of rectangle: " + str(sides))
rectangle = Rectangle(sides)
rectangle.calculate_area()
rectangle.calculate_perimeter()

print("\nVerify if last figure is a regular polygon: " + str(sides))
not_regular = Regular(sides)
print(not_regular.valid())

sides = [7,7,7,7,7,7]
print("\nVerify if polygon the following regular : " + str(sides))
regular = Regular(sides)
print(regular.valid())
