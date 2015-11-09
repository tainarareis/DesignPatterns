/**
 *	Interface (in C++ is made implementing a Abstract Class) which sets the
 *	characteristics of a requirement object. This is the Component.
 *	The Composite (@see CompositeRequirement) maintain Leaves (Classes which
 *	implements this interface, including the Composite) to execute the action
 *	desirable (show Requirement's information). You can use each leaf alone,
 *	or you can use the Composite to generate a list of requirements, and both
 *	can be properly accessed by the exactly same way.
 */

 // Include Guards Preprocessors.
#ifndef REQUIREMENT_H
#define REQUIREMENT_H

class Requirement
{
public:
	/**
	 *	Show requirement's information.
	 */
	virtual void show_requirement() = 0;
};

#endif // REQUIREMENT_H
