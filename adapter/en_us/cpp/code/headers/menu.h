/**
 *	@file menu.cpp
 *	Class responsible to show a list of food, and their informations.
 *	It is the client.
 */

// Include Guards Preprocessors.
#ifndef MENU_H
#define MENU_H

#include "food.h" // Header file needed to get food information.
#include <list> // Header library needed to use List template.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class Menu
{
public:
	/**
	 *	Show information from all food contained in this menu.
	 */
	void show_menu();

	/**
	 *	Add a food in this menu
	 */
	void add_food(Food* food);

private:
	list<Food*> m_food_list;
};

#endif // MENU_H
