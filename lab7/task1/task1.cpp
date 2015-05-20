// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;

bool FindMax(std::vector<int> const& arr, int &maxValue)
{
	if (arr.empty())
	{
		return false;
	}

	maxValue = arr[0];
	for (auto elem : arr)
	{
		if (maxValue < elem)
		{
			maxValue = elem;
		}
	}
	return true;
}

bool FindMax(std::vector<string> const& arr, string &maxValue)
{
	if (arr.empty())
	{
		return false;
	}

	maxValue = arr[0];
	for (auto elem : arr)
	{
		if (maxValue < elem)
		{
			maxValue = elem;
		}
	}
	return true;
}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{
	std::vector<int> a = { 1, 4, -2, 0, 12, -6 };
	int max;
	assert(FindMax(a, max));
	assert(max == 12);
	
	std::vector<string> strings = { "cat", "dog", "apple", "cow" };
	string maxString;
	assert(FindMax(strings, maxString));
	assert(maxString == "dog");
	return 0;
}

