/**
 *	Class responsible to convert a measure in Fahrenheit into Celsius.
 *	It is a Concrete Strategy of the context.
 */
public class FahrenheitToCelsius implements Converter {

	/*
	 *	Names of the types of measure.
	 */
	private final String CELSIUS = "°C (Celsius)";
	private final String FAHRENHEIT = "°F (Fahrenheit)";

	/*
	 *	Convert a measure in Fahrenheit into Celsius.
	 *
	 *	@param currentMeasure	a measure in Fahrenheit.
	 *	@return	the measure converted into Celsius
	 */
	@Override
	public float convert(float currentMeasure) {

		/*
		 *	Converting Fahrenheit to Celsius.
		 *	For more information:
		 *		https://en.wikipedia.org/wiki/Conversion_of_units_of_temperature
		 */
		float convertedMeasure = (currentMeasure - 32f) * (5f / 9f);

		/*
		 *	Inform the conversion as follows: <X>°F (Fahrenheit) = <Y>°C (Celsius).
		 *	Used to show a result of an application using Strategy Pattern.
		 */
		System.out.println(currentMeasure + FAHRENHEIT + " = " + convertedMeasure + CELSIUS);

		return convertedMeasure;
	}
}
