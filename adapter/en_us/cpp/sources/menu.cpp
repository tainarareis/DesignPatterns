#include "menu.h"

void
Menu::show_menu()
{
	/*
	 *	Show ingredients of all the foods in the list of this
	 *	object. If the list is empty, this method says so.
	 */
	if(!m_food_list.empty())
	{
		for(list<Food*>::iterator food = m_food_list.begin();
				food != m_food_list.end(); ++food)
		{
			(*food)->show_ingredients();
		}
	}
	else
	{
		cout << "There is no food registered in this menu." << endl;
	}
}

void
Menu::add_food(Food* food)
{
	/*
	 *	Insert a food-type object in the list. If the object is NULL, something
	 *	really noisy should happen (:o) but the method simply do nothing.
	 */
	if(food != NULL)
	{
		m_food_list.push_back(food);
	}
	else
	{
		// It is a good idea to throw an exception here.
	}
}
