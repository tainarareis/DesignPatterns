require './circle'
require './rectangle'
require './regular'

puts "Calculate circunference and area of circle with radius 3"
circle = Circle.new(3)
circle.calculate_area
circle.calculate_perimeter


sides = [2, 4, 2, 4]

puts "\nCalculate area and perimeter of rectangle: #{sides}"
rectangle = Rectangle.new(sides)
rectangle.calculate_area
rectangle.calculate_perimeter

puts "\nVerify if last figure is a regular polygon: #{sides}"
not_regular = Regular.new(sides)
puts not_regular.valid

sides = [7,7,7,7,7,7]
puts "\nVerify if polygon the following regular : #{sides}"
regular = Regular.new(sides)
puts regular.valid
