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
// ���� �� ���������:
BOOST_FIXTURE_TEST_SUITE(DefaultStack, DefaultStack_)
	// �������� ������
	BOOST_AUTO_TEST_CASE(IsEmpty)
	{
		BOOST_CHECK(defaultStack.IsEmpty());
	}

	// ����� ���������� �������� ���������� �� ������
	BOOST_AUTO_TEST_CASE(BecomesNotEmptyAutoPushingAnElement)
	{
		defaultStack.Push(Item());
		BOOST_CHECK(!defaultStack.IsEmpty());
	}
BOOST_AUTO_TEST_SUITE_END()
