#include "user_story.h"
#include "feature.h"
#include "epic.h"
#include "composite_requirement.h"

#include <string> // Header library needed to use the string type.
#include <iostream> // Header library needed to use input/output methods.
using namespace std; // Setting use of std to avoid the use of the prefix.

/**
 *	Main program with examples of application using Composite Pattern.
 *
 *	@see	Requirement for more information about the context.
 */
int main()
{
	/*
	 *	Creating an UserStory.
	 */
	string us01_title ("Apply Composite in C++ Language");
	string us01_role ("student");
	string us01_goal ("use a Composite example pattern in C++ language");
	string us01_reason ("I can understand how to use the pattern");
	UserStory* us01 = new UserStory(us01_title, us01_role, us01_goal, us01_reason);

	/*
	 *	Creating a Feature.
	 */
	string f01_title ("Structural Patterns");
	string f01_description ("GOF structural examples");
	Feature* f01 = new Feature(f01_title, f01_description);

	/*
	 * Creating an Epic
	 */
	string e01_title ("GOF Patterns");
	string e01_description ("All GOF patterns exemplified");
	Epic* e01 = new Epic(e01_title, e01_description);

	/*
	 * Generating the composite.
	 * Note that the Composite handle all the leaves of requirements exactly
	 * the same way.
	 */
	CompositeRequirement composite_requirement;
	composite_requirement.add_requirement(us01);
	composite_requirement.add_requirement(f01);
	composite_requirement.add_requirement(e01);

	/*
	 * Show the information of all requirements listed in composite.
	 */
	composite_requirement.show_requirement();

	return 0;
}
