/**
 *	Class responsible to redirect the responsability to convert a measure
 *	to a more suitable object, according to the Strategy Pattern.
 *
 *	@see	Converter for more information about the Strategy Pattern.
 *	@see	CelsiusToFahrenheit for more information about the context.
 *	@see	FahrenheitToCelsius for more information about the context.
 */
public class MeasureCalculator {

	/**
	 *	Redirect the responsability to convert a measure to a Converter object.
	 *
	 *	@param	currentMeasure	a measure.
	 *		(Currently: only temperature measures).
	 *	@param	converter	responsible to convert a measure.
	 *		(Currently: can be an instace of CelsiusToFahrenheit or FahrenheitToCelsius).
	 *	@return	the converted value of the measure
	 */
	public float convertMeasure(float currentMeasure, Converter converter) {

		float convertedMeasure = converter.convert(currentMeasure);

		return convertedMeasure;
	}
}
