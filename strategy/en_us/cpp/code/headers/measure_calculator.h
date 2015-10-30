/**
 *	@file measure_calculator.cpp
 *	Class responsible to redirect the responsability to convert a measure
 *	to a more suitable object, according to the Strategy Pattern.
 *
 *	@see	Converter for more information about the Strategy Pattern.
 *	@see	CelsiusToFahrenheit for more information about the context.
 *	@see	FahrenheitToCelsius for more information about the context.
 */

// Include Guards Preprocessors
#ifndef MEASURE_CALCULATOR_H
#define MEASURE_CALCULATOR_H

#include "converter.h" // Header file needed to redirect the conversion.

class MeasureCalculator
{
public:
	/**
	 *	Redirect the responsability to convert a measure to a Converter object.
	 *
	 *	@param	currentMeasure	a measure.
	 *		(Currently: only temperature measures).
	 *	@param	converter	responsible to convert a measure.
	 *		(Currently: can be an instace of CelsiusToFahrenheit or FahrenheitToCelsius).
	 *	@return	the converted value of the measure
	 */
	float convert_measure(float current_measure, Converter* converter);
};

#endif // MEASURE_CALCULATOR_H
