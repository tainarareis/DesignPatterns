/**
 *  File: Converter
 *  Role: Interface
 *	Purpose: Interface which sets the convert method to the classes which will
 *	implement their specific kind of a measure conversion.
 *	The Context (@see MeasureCalculator) calls an Strategy (A class which
 *	implements this interface) to execute the action desirable (Convert a
 *	measure).
 */

public interface Converter {

	/*
	 *	Names of the types of measure.
	 */
	final String CELSIUS = "°C (Celsius)";
	final String FAHRENHEIT = "°F (Fahrenheit)";

	/**
	 *	Convert a measure of a type into another (interface).
	 *	@param 	currentMeasure	a measure.
	 *	@return	the converted value of the measure
	 */
	public float convert(float currentMeasure);

}
