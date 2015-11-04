require './polygon_decorator'

# Polygons regular have some especial properties
class Regular < PolygonDecorator

  def valid
    first_side = @sides[0]
    @sides.each do |side|
      if side != first_side
        return false
      end
    end
    return true
  end

end
