require './geometric'

# Circle is an particular figure,
# because depends of radius in your meassures
class Circle
  include Geometric

  # To create, needs an circle
  def initialize(radius)
    @radius = radius
  end

  def calculate_area
    @area = (Math::PI * @radius * @radius)
    puts "Area = " << @area.to_s
  end

  # Perimeter of circle is the circunference
  def calculate_perimeter
    @perimeter = (2 * Math::PI * @radius)
    puts "Circunference = " << @perimeter.to_s
  end
end
