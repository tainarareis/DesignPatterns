#include "composite_requirement.h"

void
CompositeRequirement::show_requirement()
{
	if(!m_requirements.empty())
	{
		for(list<Requirement*>::iterator requirement = m_requirements.begin();
				requirement != m_requirements.end(); ++requirement)
		{
			(*requirement)->show_requirement();
		}
	}
	else
	{
		cout << "There is no requirement registered in this composite." << endl;
	}
}

void
CompositeRequirement::add_requirement(Requirement* requirement)
{
	if(requirement != NULL)
	{
		m_requirements.push_back(requirement);
	}
	else
	{
		// It is a good idea to throw an exception here.
	}
}

void
CompositeRequirement::remove_requirement()
{
	if(!m_requirements.empty())
	{
		m_requirements.pop_back();
	}
	else
	{
		cout << "There is no requirement to remove in this composite." << endl;
	}
}
