#pragma once
#include<iostream>
using namespace std;

string copyStr(string str, int n);

/*
* ����������������
*/
int sum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}

/*
	����n�Ľ׳�
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
	���㺯�������ü���
*/
int callCoount()
{
	static int count = 0;  // �ֲ���̬������ ֻ����һ�� �ᴩ��������Ŀ�ʼ����
	return ++count;
}