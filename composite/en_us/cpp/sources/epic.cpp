#include "epic.h"

Epic::Epic(string title, string description)
{
	if(!title.empty())
	{
		m_title.assign(title);
	}
	else
	{
		m_title.assign("NOT DEFINED");
	}

	if(!description.empty())
	{
		m_description.assign(description);
	}
	else
	{
		m_description.assign("NOT DEFINED");
	}
}

void
Epic::show_requirement()
{
	cout
		<< "[EPIC]: " << m_title << endl
		<< "\t" << m_description <<
	endl;
}
