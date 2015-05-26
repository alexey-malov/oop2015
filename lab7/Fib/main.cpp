#include <iostream>

using namespace std;

template <unsigned N>
struct Fibonacci
{
	enum { value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value };
};

template <>
struct Fibonacci<0>
{
	enum { value = 0 };
};

template <>
struct Fibonacci < 1 >
{
	enum { value = 1 };
};

void main()
{
	cout << "Fib(0) = " << Fibonacci<0>::value << endl;
	cout << "Fib(1) = " << Fibonacci<1>::value << endl;
	cout << "Fib(2) = " << Fibonacci<2>::value << endl;
	cout << "Fib(3) = " << Fibonacci<3>::value << endl;
	cout << "Fib(4) = " << Fibonacci<4>::value << endl;
	cout << "Fib(5) = " << Fibonacci<5>::value << endl;
	cout << "Fib(6) = " << Fibonacci<6>::value << endl;
	cout << "Fib(45) = " << Fibonacci<45>::value << endl;
	cout << "Fib(46) = " << Fibonacci<46>::value << endl;
	cout << "Fib(47) = " << Fibonacci<47>::value << endl;
}