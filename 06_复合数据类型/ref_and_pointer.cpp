#include<iostream>
using namespace std;

/*
	���ú�ָ��
	���õı��ʣ�C++��һ���﷨�ǣ����Ƕ�ָ���һ��αװ��
*/
int main() 
{
	int a = 10;
	// ���ú�ָ�볣��
	int& ref = a;
	int* const p = &a; 
	
	ref = 20;
	cout << "a = " << a << endl;
	*p = 30;	// ��Ҫ������
	cout << "a = " << a << endl;
	// 1��ָ�볣�� �����ڴ��п��ٿռ�  ���ò������ڴ��п��ٿռ�
	cout << "a�ĵ�ַ��" << &a << endl;		// = &a
	cout << "ref�ĵ�ַ��" << &ref << endl;  // = &a
	cout << "p�ĵ�ַ��" << &p << endl;		// �������ڴ�
	cout << "p��ֵ��" << p << endl;			//  = &a

	// ��ָ�������
	int* ptr = &a;
	int*& pref = ptr;	// �󶨵��� int* ptr ָ��
	*pref = 40;			//  
	cout << "a = " << a << endl;

	// �����õ�ָ��
	// int&* p = &pref;   // ���� û��ָ�����õ�ָ��
}