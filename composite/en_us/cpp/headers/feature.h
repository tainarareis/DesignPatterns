/**
 *	@file feature.cpp
 *	Class responsible to show information of a Feature.
 *	It is a Leaf of the Component.
 */

// Include Guards Preprocessors.
#ifndef FEATURE_H
#define FEATURE_H

#include "requirement.h" // Header file needed to get food information.
#include <string> // Header library needed to use the string type.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class Feature : public Requirement
{
public:

	/**
	 *	Constructor which sets all attributes of this class
	 */
	Feature(string title, string description);

	/**
	 *	Show information on the following pattern:
	 *		[Feature]: <title>
	 *			<description>
	 */
	virtual void show_requirement();

private:
	string m_title; /**<	The title of this Feature. */
	string m_description; /**<	A description of this Feature. */
};

#endif // FEATURE_H
