#include<iostream>
using namespace std;

int fib(int x)
{
	if (x == 1 || x == 2)
		return 1;
	return fib(x - 2) + fib(x - 1);
}
int main()
{
	cout << fib(9) << endl;
}