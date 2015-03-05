// task1_tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task1/VectorProcessor.h"

using namespace std;

BOOST_AUTO_TEST_CASE(EmptyVectorProducesEmptyVector)
{
	vector<double> emptyVector;
	ProcessVector(emptyVector);
	BOOST_CHECK(emptyVector.empty());
}

BOOST_AUTO_TEST_CASE(VectorWithoutDosntChangeContent)
{
	vector<double> numbers = { -4, 0, -3 };
	auto copy(numbers);
	ProcessVector(numbers);
	BOOST_CHECK(numbers == copy);
}

BOOST_AUTO_TEST_CASE(VectorIsOnePositiveElement)
{
	vector<double> numbers = { -1, 3 };
	ProcessVector;
}