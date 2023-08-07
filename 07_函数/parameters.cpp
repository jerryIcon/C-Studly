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

// ��������Ԫ�ؽ��д�ӡ
// int arr[] = int* arr ���Ǵ���arr[0]��ָ��
void printArray(const int arr[])
{
	
}
void printArray(const int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
// ʹ���������� int(&arr)[5] 
void printArray(const int(&arr)[5])
{
	for(int num : arr)
		cout << "num = " << num << endl;
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

	int arr[5] = { 1,2,3,4,5 };
	printArray(arr, size(arr));
	printArray(arr);
}