/**
 * File: MeasureCalculator
 * Role: Strategy
 * Purpose: Class responsible to redirect the responsability to convert a measure
 * to a more suitable object, according to the Strategy Pattern.
 */
public class MeasureCalculator {

	//The converter is used to provides the conversion.
	private Converter converter;

	/**
	 *	Redirects the responsability to convert any measure to the Converter object.
	 *	@param	currentMeasure	a measure.
	 *	@param	converter	responsible to convert a measure.
	 *	@return	the converted value of the measure
	 */
	public float convertMeasure(float currentMeasure, Converter converter) {

		float convertedMeasure = converter.convert(currentMeasure);

		return convertedMeasure;
	}
}
