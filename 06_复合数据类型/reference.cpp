#include<iostream>
using namespace std;

/*
	���ã��൱�ڱ��������ڴ��в�ռ�ÿռ�
*/
int main()
{
	// 1.���ã�����������һ������
	int a = 10,b = 200;
	int& ref = a;  // ����a������

	cout << "ref = " << ref << endl;  // s= 10;
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "ref�ĵ�ַ��" << &ref << endl;

	ref = 15;
	cout << "a = " << a << endl;

	ref = b;		 // ������ĵ�ַ��ֻ���޸�ֵ�������볣���󶨵����ò����޸�
	cout << "ref�ĵ�ַ��" << &ref << endl;
	cout << "a = " << a << endl;    //  a = 200;

	// 2.���õ�����
	int& rref = ref;
	rref = 36;
	cout << "a = " << a << endl;    //  a = 36;

	// 3.�� ���������ã��������ã�
	const int zero = 0;
	// int & cref = zero  ����
	const int& cref = zero;
	// cref = 20;    ����

	int i = 30;
	const int& cref2 = i;   // ���԰�һ������
	const int& cref3 = 10;
	double d = 3.14;
	const int& cref4 = d;   // ���԰��ܻ���ת��������
	
	// ���úͳ������õ�����
	// cref2 = 40;  // ʧ�ܡ����ܶ԰����õ����ݽ����޸�
	ref = 40;		// �ɹ��������޸�
}