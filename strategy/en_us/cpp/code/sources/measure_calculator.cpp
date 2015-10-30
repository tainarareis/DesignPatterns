#include "measure_calculator.h"

float
MeasureCalculator::convert_measure(float current_measure, Converter* converter)
{
	float converted_measure = converter->convert(current_measure);

	return converted_measure;
}
