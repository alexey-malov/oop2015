// task2tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task2/Stack.h"

struct Item
{

};

struct DefaultStack_
{
	CStack<Item> defaultStack;
};
// Стек по умолчанию:
BOOST_FIXTURE_TEST_SUITE(DefaultStack, DefaultStack_)
	// является пустым
	BOOST_AUTO_TEST_CASE(IsEmpty)
	{
		BOOST_CHECK(defaultStack.IsEmpty());
	}

BOOST_AUTO_TEST_SUITE_END()
