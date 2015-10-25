/**
 *	Interface which set the convert method to the classes which will
 *	implement their specific kind of a measure conversion.
 *	<p>
 *	The Context (@see MeasureCalculator) calls an Strategy (A class which
 *	implements this interface) to execute the action desirable (Convert a
 *	measure).
 */

public interface Converter {

	/**
	 *	Convert a measure of a type into another
	 *
	 *	@param 	currentMeasure	a measure
	 *	@return	the converted value of the measure
	 */
	public float convert(float currentMeasure);
}
