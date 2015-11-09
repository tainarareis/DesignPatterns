/**
 *	@file composite_requirement.cpp
 *	Class responsible to maintain requirement objects.
 *	It is the Composite.
 */

// Include Guards Preprocessors.
#ifndef COMPOSITE_REQUIREMENT_H
#define COMPOSITE_REQUIREMENT_H

#include "requirement.h" // Header file needed to get food information.
#include <list> // Header library needed to use List template.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class CompositeRequirement : public Requirement
{
public:
	/**
	 *	Show information from all Requirement contained in this composite.
	 */
	virtual void show_requirement();

	/**
	 *	Add a Requirement in this composite
	 */
	void add_requirement(Requirement* requirement);

	/**
	 *	Remove the last Requirement added in this composite
	 */
	void remove_requirement();
private:
	list<Requirement*> m_requirements; /**<	A List of Requirements. */
};

#endif // COMPOSITE_REQUIREMENT_H
