/**
 *	Interface (in C++ is made implementing a Abstract Class) which sets the
 *	characteristics of a vegan food object in Luigi's system.
 *	The Adapter (@see FoodAdapter) adapts the Adaptee (A class which implements
 *	this interface) to execute the action desirable (show food's information),
 *	maintaining the structure of the Client (@see Menu).
 */

 // Include Guards Preprocessors.
#ifndef VEGAN_FOOD_H
#define VEGAN_FOOD_H

class VeganFood
{
public:
	/**
	 *	Show all ingredients.
	 */
	virtual void show_vegan_ingredients() = 0;
};

#endif // VEGAN_FOOD_H
