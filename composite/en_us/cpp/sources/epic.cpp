#include "epic.h"

Epic::Epic(string title, string description)
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
Epic::show_requirement()
{
	/*
	 *	Show the Epic's information.
	 */
	cout
		<< "[EPIC]: " << m_title << endl
		<< "\t" << m_description <<
	endl;
}
