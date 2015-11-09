/**
 *	Interface (in C++ is made implementing a Abstract Class) which sets the
 *	convert method to the classes which will implement their specific kind of
 *	a measure conversion.
 *	The Context (@see MeasureCalculator) calls an Strategy (A class which
 *	implements this interface) to execute the action desirable (Convert a
 *	measure).
 */

 // Include Guards Preprocessors.
#ifndef CONVERTER_H
#define CONVERTER_H

class Converter
{
public:
	/**
	 *	Convert a measure of a type into another (abstract).
	 *
	 *	@param 	currentMeasure	a measure.
	 *	@return	the converted value of the measure
	 */
	virtual float convert(float current_measure) = 0;
};

#endif // CONVERTER_H
