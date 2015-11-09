#include "measure_calculator.h"

float
MeasureCalculator::convert_measure(float current_measure, Converter* converter)
{
	/*
	 *	Redirect the responsability of conversion to a Converter-type class.
	 */
	float converted_measure = converter->convert(current_measure);

	return converted_measure;
}
