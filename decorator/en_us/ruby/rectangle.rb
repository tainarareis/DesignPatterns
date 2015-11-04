require './polygon_decorator'

# All Polygons have an simple way to calculate your area
class Rectangle < PolygonDecorator
  def calculate_area
    @area = (@sides[0] * @sides[1])
    puts "Area = " << @area.to_s
  end
end
