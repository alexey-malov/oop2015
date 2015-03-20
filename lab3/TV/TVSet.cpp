#include "stdafx.h"
#include "TVSet.h"


CTVSet::CTVSet()
	:m_isTurnedOn(false)
	,m_channel(1)
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
		return m_channel;
	}
	return 0;
}

bool CTVSet::SelectChannel(int channel)
{
	if (channel > 0 && channel < 100)
	{
		m_channel = channel;
		return true;
	}
	return false;
}
