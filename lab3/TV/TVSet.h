#pragma once
class CTVSet
{
public:
	CTVSet();
	~CTVSet();
	bool IsTurnedOn() const;
	bool TurnOn();
private:
	bool m_isTurnedOn;
};

