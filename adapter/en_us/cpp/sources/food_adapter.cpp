#include "food_adapter.h"

FoodAdapter::FoodAdapter(VeganFood* vegan_food)
{
	/*
	 *	Receive a VeganFood object. If the object is NULL, something really noisy
	 *	should happen (:o) but the method simply do nothing and the instance of
	 *	this class will be unuseful.
	 */
	if(vegan_food != NULL)
	{
		m_vegan_food = vegan_food;
	}
	else
	{
		// It is a good idea to throw an exception here.
	}
}

void
FoodAdapter::show_ingredients()
{
	/*
	 *	Using the same method's name of Food, execute VeganFood's equivalent
	 *	method. If VeganFood is NULL, something really noisy should happen (:o)
	 *	but the method simply do nothing.
	 */
	if(m_vegan_food != NULL)
	{
		m_vegan_food->show_vegan_ingredients();
	}
	else
	{
		// It is a good idea to throw an exception here.
	}
}
