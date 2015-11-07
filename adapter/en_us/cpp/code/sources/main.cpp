#include "menu.h"
#include "food_adapter.h"
#include "broccoli_pizza.h"
#include "pepperoni_pizza.h"

#include <iostream> // Header library needed to use input/output methods.
using namespace std; // Setting use of std to avoid the use of the prefix.

/**
 *	Main program with examples of application using Adapter Pattern.
 *
 *	@see	Food for more information about the context.
 */
int main()
{
	/*
	 *	Creating the Food.
	 */
	PepperoniPizza pepperoni_pizza;
	BroccoliPizza broccoli_pizza;
	FoodAdapter *broccoli_pizza_adapted = new FoodAdapter(&broccoli_pizza);

	/*
	 * Creating the Menu.
	 */
	Menu menu;
	menu.add_food(&pepperoni_pizza);
	menu.add_food(broccoli_pizza_adapted);

	/*
	 * Show the ingredients of all food listed in menu.
	 */
	menu.show_menu();

	return 0;
}
