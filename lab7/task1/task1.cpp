// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;

template<typename T>
bool FindMax(std::vector<T> const& arr, T &maxValue)
{
	if (arr.empty())
	{
		return false;
	}

	size_t max = 0;
	for (size_t i = 1; i < arr.size(); ++i)
	{
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}
	maxValue = arr[max];
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

