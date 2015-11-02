class MeasureCalculator

	# Names of the types of measure.
	CELSIUS = "°C (Celsius)"
	FAHRENHEIT = "°F (Fahrenheit)"

  attr_accessor :converter

  def initialize(converter)
    @converter = converter
  end

  def convert_measure(value)
    converted_measure = converter.convert(value)
    print value, converted_measure
  end

  def print(current_measure, converted_measure)
    if @converter.is_a?(CelsiusFahrenheit)
      puts "#{current_measure} #{CELSIUS} equals to "\
            "#{converted_measure} #{FAHRENHEIT}"
    else
      puts "#{current_measure} #{FAHRENHEIT} equals to "\
            "#{converted_measure} #{CELSIUS}"
    end
  end
end
