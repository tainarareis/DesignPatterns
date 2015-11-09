/**
 *	@file food_adapter.cpp
 *	Class responsible to adapt a VeganFood's method to a Food's method format.
 *	It is a Adapter of the target.
 */

// Include Guards Preprocessors.
#ifndef FOOD_ADAPTER_H
#define FOOD_ADAPTER_H

#include "food.h" // Header file needed to inherit Food.
#include "vegan_food.h" // Header file needed to get vegan food information.
#include <cstdlib> // Header library to use the constant NULL

class FoodAdapter : public Food
{
public:
	/**
	 *	FoodAdapter constructor.
	 *
	 *	@param vegan_food	A vegan food from Luigi's system.
	 */
	FoodAdapter(VeganFood* vegan_food);

	/**
	 *	Show all ingredients from a VeganFood in a Food's method format.
	 */
	virtual void show_ingredients();

private:
		VeganFood* m_vegan_food; /**<	An instance of Luigi's VeganFood. */
};

#endif // FOOD_ADAPTER_H
