/**
 *	@file user_story.cpp
 *	Class responsible to show information of an User Story.
 *	It is a Leaf of the Component.
 */

// Include Guards Preprocessors.
#ifndef USER_STORY_H
#define USER_STORY_H

#include "requirement.h" // Header file needed to get food information.
#include <string> // Header library needed to use the string type.
#include <iostream> // Header library needed to use input/output methods.

using namespace std; // Setting use of std to avoid the use of the prefix.

class UserStory : public Requirement
{
public:

	/**
	 *	Constructor which sets all attributes of this class
	 */
	UserStory(string title, string role, string goal, string reason);

	/**
	 *	Show information on the following pattern:
	 *		[USER STORY]: <title>
	 *			As: <role>
	 *			I want to: <goal>
	 *			So that: <reason>.
	 */
	virtual void show_requirement();

private:
	string m_title; /**<	The title of this User Story. */
	string m_role; /**<	The role where directly wish this User Story done. */
	string m_goal; /**<	The role's goal with this User Story, the features. */
	string m_reason; /**<	The role's reason with this User Story, the objectives. */
};

#endif // USER_STORY_H
