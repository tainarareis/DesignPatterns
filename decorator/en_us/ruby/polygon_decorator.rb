require './geometric'

# All polygons have an simple way to calculate perimeter
class PolygonDecorator
  include Geometric

  attr_reader :sides

  def initialize(sides)
    @sides = sides
  end

  # Sum all sides
  def calculate_perimeter
    @perimeter = (sides.inject{|sum, side| sum + side })
    puts "Perimeter = " << @perimeter.to_s
  end
end
