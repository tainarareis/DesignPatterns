/**
 *	@file epic.cpp
 *	Class responsible to show information of an Epic.
 *	It is a Leaf of the Component.
 */

// Include Guards Preprocessors.
#ifndef EPIC_H
#define EPIC_H

#include "requirement.h" // Header file needed to get food information.
#include <string> // Header library needed to use the string type.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class Epic : public Requirement
{
public:

	/**
	 *	Constructor which sets all attributes of this class
	 */
	Epic(string title, string description);

	/**
	 *	Show information on the following pattern:
	 *		[Epic]: <title>
	 *			<description>
	 */
	virtual void show_requirement();

private:
	string m_title; /**<	The title of this Epic. */
	string m_description; /**<	A description of this Epic. */
};

#endif // EPIC_H
