#include<iostream>
using namespace std;

// const���������ز���
void fun(int x){}
// void fun(const int x){}		// ������Ϊ�βΣ�������const��ȫ�ȼ�

void fun2(int * p){}
// void fun2(int * const pc ){}  //ָ�볣�����βΣ�Ҳ������cosnt�ȼ�

void fun3(int & x){}
void fun3(const int &x){}   // �Ϸ�����

void fun4(int * p){}
void fun4(const int * p){}  // ����ָ��

void print(int i)
{
	cout << "int��"<< i << endl;
}
void print(double i)
{
	cout << "double��" << i << endl;
}
void print(string i)
{
	cout << "string��" << i << endl;
}
int main()
{
	int i = 1;
	fun(1);
	int* p = &i;
	int* const pc = p;
	// pc = p;
	p = pc;

	// ����
	int& i2 = i;
	// int& i3 = i;	//����
	const int& ci2 = i2;
	const int& ci3 = i;

	void print(int i);   // ����
	void print(string i);   // ����

	print(1);
	print(1.1);
	print("1.2");
}