/**
 *	@file broccoli_pizza.cpp
 *	Class responsible to show ingredients of a Broccoli Pizza.
 *	It is a concrete class of the adaptee.
 */

// Include Guards Preprocessors.
#ifndef BROCCOLI_PIZZA_H
#define BROCCOLI_PIZZA_H

#include "vegan_food.h" // Header file needed to inherit VeganFood.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class BroccoliPizza : public VeganFood
{
public:
	/**
	 *	Show all Broccoli's Pizza ingredients.
	 */
	virtual void show_vegan_ingredients();
};

#endif // BROCCOLI_PIZZA_H
