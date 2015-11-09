#include "user_story.h"

UserStory::UserStory(string title, string role, string goal, string reason)
{
	if(!title.empty())
	{
		m_title.assign(title);
	}
	else
	{
		m_title.assign("NOT DEFINED");
	}

	if(!role.empty())
	{
		m_role.assign(role);
	}
	else
	{
		m_role.assign("NOT DEFINED");
	}

	if(!goal.empty())
	{
		m_goal.assign(goal);
	}
	else
	{
		m_goal.assign("NOT DEFINED");
	}

	if(!reason.empty())
	{
		m_reason.assign(reason);
	}
	else
	{
		m_reason.assign("NOT DEFINED");
	}
}

void
UserStory::show_requirement()
{
	cout
		<< "[USER STORY]: " << m_title << endl
		<< "\t" << "As: " << m_role << endl
		<< "\t" << "I want to: " << m_goal << endl
		<< "\t" << "So that: " << m_reason <<
	endl;
}
