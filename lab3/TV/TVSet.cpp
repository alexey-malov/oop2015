#include "stdafx.h"
#include "TVSet.h"


CTVSet::CTVSet()
	:m_isTurnedOn(false)
{

}


CTVSet::~CTVSet()
{
}

bool CTVSet::IsTurnedOn()const
{
	return m_isTurnedOn;
}

bool CTVSet::TurnOn()
{
	m_isTurnedOn = true;
	return m_isTurnedOn;
}

bool CTVSet::TurnOff()
{
	m_isTurnedOn = false;
	return true;
}

int CTVSet::GetChannel() const
{
	if (m_isTurnedOn)
	{
		return 1;
	}
	return 0;
}
