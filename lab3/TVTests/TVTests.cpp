// TVTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../TV/TVSet.h"

/*
Телевизор
	- изначально выключен
	- может быть включен

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

BOOST_AUTO_TEST_SUITE_END()