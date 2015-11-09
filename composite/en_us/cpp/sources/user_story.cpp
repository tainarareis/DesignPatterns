#include "user_story.h"

UserStory::UserStory(string title, string role, string goal, string reason)
{
	/*
	 * Assign the title, if exists.
	 */
	if(!title.empty())
	{
		m_title.assign(title);
	}
	else
	{
		m_title.assign(NOT_DEFINED);
	}

	/*
	 * Assign the role, if exists.
	 */
	if(!role.empty())
	{
		m_role.assign(role);
	}
	else
	{
		m_role.assign(NOT_DEFINED);
	}

	/*
	 * Assign the goal, if exists.
	 */
	if(!goal.empty())
	{
		m_goal.assign(goal);
	}
	else
	{
		m_goal.assign(NOT_DEFINED);
	}

	/*
	 * Assign the reason, if exists.
	 */
	if(!reason.empty())
	{
		m_reason.assign(reason);
	}
	else
	{
		m_reason.assign(NOT_DEFINED);
	}
}

void
UserStory::show_requirement()
{
	/*
	 *	Show the User Story's information.
	 */
	cout
		<< "[USER STORY]: " << m_title << endl
		<< "\t" << "As: " << m_role << endl
		<< "\t" << "I want to: " << m_goal << endl
		<< "\t" << "So that: " << m_reason <<
	endl;
}
