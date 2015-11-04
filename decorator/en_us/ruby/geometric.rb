# Basic interface
module Geometric
  # All figures should have perimeter or area
  attr_reader :area, :perimeter

  # By default, this module's methods prints what is area
  # and perimeter

  def calculate_area
    puts "Area depends of figure, but we can calculate through triangles"
  end

  def calculate_perimeter
    puts "Perimeter is sum of all sides"
  end
end
