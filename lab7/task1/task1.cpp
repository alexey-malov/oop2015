// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

bool FindMax(std::vector<int> const& arr, int &maxValue)
{
	if (arr.empty())
	{
		return false;
	}

	maxValue = INT_MIN;
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
	return 0;
}

