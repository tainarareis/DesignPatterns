#include "feature.h"

Feature::Feature(string title, string description)
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
	 * Assign the description, if exists.
	 */
	if(!description.empty())
	{
		m_description.assign(description);
	}
	else
	{
		m_description.assign(NOT_DEFINED);
	}
}

void
Feature::show_requirement()
{
	/*
	 *	Show the Feature's information.
	 */
	cout
		<< "[FEATURE]: " << m_title << endl
		<< "\t" << m_description <<
	endl;
}
