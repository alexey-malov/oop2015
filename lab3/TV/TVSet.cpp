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
