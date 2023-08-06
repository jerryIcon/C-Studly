#pragma once
#include<iostream>
using namespace std;

string copyStr(string str, int n);

/*
* 求两个数的立方和
*/
int sum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}

/*
	计算n的阶乘
*/
int factorial(int n)
{
	int res = 1;
	for (size_t i = 1; i <= n; i++)
	{
		res *= i;
	}
	return res;
}



/*
	计算函数被调用几次
*/
int callCoount()
{
	static int count = 0;  // 局部静态变量， 只创建一次 贯穿整个程序的开始结束
	return ++count;
}