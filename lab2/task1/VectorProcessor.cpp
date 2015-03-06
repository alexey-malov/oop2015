#include "stdafx.h"
#include "VectorProcessor.h"
#include <algorithm>

using namespace std;

void ProcessVector(std::vector<double> & numbers)
{
	auto IsPositive = [](double number){return number > 0; };
	auto it = find_if(numbers.begin(), numbers.end(), IsPositive);
	double foundPositiveNumber = it != numbers.end() ? *it : 0;

	for (auto &number : numbers)
	{
		number += foundPositiveNumber;
	}

	// TODO:	1 Найти среднее арифметическое положительных элементов вектора
	//			2 Увеличить каждый элемент массив на среднее арифметическое
	//			3 ...
	//			4 PROFIT!
}