#include<iostream>
#include "utils.h"
using namespace std;

int main()
{
	int x = 3, y = 10;
	cout << "x^3 + y^3 = " << sum(x, y) << endl;

	int n = 3;
	cout << n << "µÄ½×³Ë = " << factorial(n) << endl;

	cout << "str¸´ÖÆ" << n << "´Î £º" << copyStr("hello ", n) << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cout << "callCount = " << callCoount() << endl;
	}
}