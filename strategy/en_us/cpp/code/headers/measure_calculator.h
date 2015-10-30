#ifndef MEASURE_CALCULATOR_H
#define MEASURE_CALCULATOR_H

#include "converter.h"

class MeasureCalculator
{
public:
	float convert_measure(float current_measure, Converter* converter);
};

#endif // MEASURE_CALCULATOR_H
