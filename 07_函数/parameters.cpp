#include<iostream>
#include "utils.h"
using namespace std;

// ָ���β�
void call(int* x)
{
	++(*x);
}

// �����β�
void call(int& x)  // ����һ������ int& x = n;
{
	++x;
}

// �Ƚ����ַ�����С �βλ���п��� string str1, string str2��Ч�ʵ�
/*
bool isLonger(string str1, string str2)
{
	return str1.size() > str2.size();
}
*/

// ʹ�����ã�string & str1, string & str2�������ñ��⿽��
bool isLonger(string & str1, string & str2)
{
	return str1.size() > str2.size();
}

// ʹ�ó������ã� ����Ҫ��ֵ��ʱ�� ����ɳ���ָ��
bool isLonger(const string& str1,const string& str2)
{
	return str1.size() > str2.size();
}


int main()
{
	int n = 0;
	cout << "x = " << n << endl;
	call(&n);
	cout << "x = " << n << endl;
	call(&n);
	cout << "x = " << n << endl;
	call(&n);
	cout << "x = " << n << endl;
	call(n);
	cout << "x = " << n << endl;
	call(n);
	cout << "x = " << n << endl;

	string str1 = "hello", str2 = "world";
	isLonger(str1, str2);
	// isLonger("hello", "world");  // ʹ�ó������ò��ܽ�������������
}