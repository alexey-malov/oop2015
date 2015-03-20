// TVTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../TV/TVSet.h"

/*
Телевизор
	- изначально выключен
	- может быть включен
	- может быть выключен
	- в выключенном состоянии должен быть на 0 канале
	- при первом включении телевизор включается на первом канале
	*/
BOOST_AUTO_TEST_SUITE(TVSet)

BOOST_AUTO_TEST_CASE(TurnedOffByDefault)
{
	CTVSet tv;
	BOOST_CHECK(!tv.IsTurnedOn());
}

BOOST_AUTO_TEST_CASE(CanBeTurnedOn)
{
	CTVSet tv;
	BOOST_CHECK(tv.TurnOn());
	BOOST_CHECK(tv.IsTurnedOn());
}

BOOST_AUTO_TEST_CASE(CanBeTurnedOff)
{
	CTVSet tv;
	tv.TurnOn();
	BOOST_CHECK(tv.TurnOff());
	BOOST_CHECK(!tv.IsTurnedOn());
}

BOOST_AUTO_TEST_CASE(IsAtChannel0WhenTurnedOff)
{
	CTVSet tv;
	BOOST_CHECK_EQUAL(tv.GetChannel(), 0);
	tv.TurnOn();
	tv.TurnOff();
	BOOST_CHECK_EQUAL(tv.GetChannel(), 0);
}

BOOST_AUTO_TEST_CASE(InitiallyIsTurnedOnAtChannel1)
{
	CTVSet tv;
	tv.TurnOn();
	BOOST_CHECK_EQUAL(tv.GetChannel(), 1);
}

BOOST_AUTO_TEST_SUITE_END()