/**
 *	File: CelsiusToFahrenheit
 *  Role: Concrete Strategy
 *  Purpose: Class responsible to convert a measure in Celsius into Fahrenheit.
 */
public class CelsiusToFahrenheit implements Converter {


	/**
	 *	Convert a measure in Celsius into Fahrenheit.
	 *
	 *	@param currentMeasure	a measure in Celsius.
	 *	@return	the measure converted into Fahrenheit
	 */
	@Override
	public float convert(float currentMeasure) {

		/*
		 *	Converting Celsius to Fahrenheit.
		 *	For more information:
		 *		https://en.wikipedia.org/wiki/Conversion_of_units_of_temperature
		 */
		float convertedMeasure = (currentMeasure * (9f / 5f)) + 32f;

		/*
		 *	Inform the conversion as follows: <X>°C (Celsius) = <Y>°F (Fahrenheit).
		 *	Used to show a result of an application using Strategy Pattern.
		 */
		System.out.println(currentMeasure + CELSIUS + " = " + convertedMeasure + FAHRENHEIT);

		return convertedMeasure;
	}
}
