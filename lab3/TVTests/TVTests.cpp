// TVTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../TV/TVSet.h"

BOOST_AUTO_TEST_SUITE(TVSet)

BOOST_AUTO_TEST_CASE(TurnedOffByDefault)
{
	CTVSet tv;
	BOOST_CHECK(!tv.IsTurnedOn());
}

BOOST_AUTO_TEST_SUITE_END()