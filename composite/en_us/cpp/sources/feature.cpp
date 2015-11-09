#include "feature.h"

Feature::Feature(string title, string description)
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
Feature::show_requirement()
{
	cout
		<< "[FEATURE]: " << m_title << endl
		<< "\t" << m_description <<
	endl;
}
