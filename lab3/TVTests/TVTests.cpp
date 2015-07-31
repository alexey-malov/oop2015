// TVTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../TV/TVSet.h"

struct TVSetFixture
{
	CTVSet tv;
};

/*
Телевизор
	- изначально выключен
	- может быть включен
	- может быть выключен
	- в выключенном состоянии должен быть на 0 канале
	- при первом включении телевизор включается на первом канале
	- позволяет выбрать с 1 по 99 канал во включенном состоянии
	*/
BOOST_FIXTURE_TEST_SUITE(TVSet, TVSetFixture)
	BOOST_AUTO_TEST_SUITE(when_created)
		BOOST_AUTO_TEST_CASE(is_turned_off)
		{
			BOOST_CHECK(!tv.IsTurnedOn());
		}
		BOOST_AUTO_TEST_CASE(can_be_turned_on)
		{
			BOOST_CHECK(tv.TurnOn());
			BOOST_CHECK(tv.IsTurnedOn());
		}
		BOOST_AUTO_TEST_CASE(is_at_channel_0)
		{
			BOOST_CHECK_EQUAL(tv.GetChannel(), 0);
		}
	BOOST_AUTO_TEST_SUITE_END()

	struct TurnedOnTv : TVSetFixture
	{
		TurnedOnTv()
		{
			tv.TurnOn();
		}
	};

	BOOST_FIXTURE_TEST_SUITE(when_turned_on, TurnedOnTv)
		BOOST_AUTO_TEST_CASE(can_be_turned_off)
		{
			BOOST_CHECK(tv.TurnOff());
			BOOST_CHECK(!tv.IsTurnedOn());
		}
		BOOST_AUTO_TEST_CASE(is_at_channel_1)
		{
			BOOST_CHECK_EQUAL(tv.GetChannel(), 1);
		}
		BOOST_AUTO_TEST_CASE(can_select_channel_from_1_to_99_when_is_on)
		{
			BOOST_CHECK(!tv.SelectChannel(0));
			BOOST_CHECK_EQUAL(tv.GetChannel(), 1);

			BOOST_CHECK(tv.SelectChannel(99));
			BOOST_CHECK_EQUAL(tv.GetChannel(), 99);

			BOOST_CHECK(!tv.SelectChannel(100));
			BOOST_CHECK_EQUAL(tv.GetChannel(), 99);

			BOOST_CHECK(tv.SelectChannel(1));
			BOOST_CHECK_EQUAL(tv.GetChannel(), 1);
		}
	BOOST_AUTO_TEST_SUITE_END()

	struct TurnedOffTv : TurnedOnTv
	{
		TurnedOffTv()
		{
			tv.TurnOff();
		}
	};
	
	BOOST_FIXTURE_TEST_SUITE(when_turned_off, TurnedOffTv)
		BOOST_AUTO_TEST_CASE(is_at_channel_0)
		{
			BOOST_CHECK_EQUAL(tv.GetChannel(), 0);
		}
		BOOST_AUTO_TEST_CASE(can_be_turned_on)
		{
			BOOST_CHECK(tv.TurnOn());
			BOOST_CHECK(tv.IsTurnedOn());
		}
	BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()