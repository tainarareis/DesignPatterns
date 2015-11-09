/**
 *	@file pepperoni_pizza.cpp
 *	Class responsible to show ingredients of a Pepperoni Pizza.
 *	It is a Concrete class of the target.
 */

// Include Guards Preprocessors.
#ifndef PEPPERONI_PIZZA_H
#define PEPPERONI_PIZZA_H

#include "food.h" // Header file needed to inherit Food.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class PepperoniPizza : public Food
{
public:
	/**
	 *	Show all Pepperoni's Pizza ingredients.
	 */
	virtual void show_ingredients();
};

#endif // PEPPERONI_PIZZA_H
