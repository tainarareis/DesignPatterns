/**
 *	Interface (in C++ is made implementing a Abstract Class) which sets the
 *	characteristics of a food object in Mario's system.
 *	The Client (@see Menu) calls a Target (A class which implements this interface)
 *	to execute the action desirable (show food's information). The Adapter
 *	(@see FoodAdapter), which is a child of this interface, adapts the Adaptee
 *	(@see VeganFood) interface in order to allow its use.
 */

 // Include Guards Preprocessors.
#ifndef FOOD_H
#define FOOD_H

class Food
{
public:
	/**
	 *	Show all ingredients.
	 */
	virtual void show_ingredients() = 0;
};

#endif // FOOD_H
