#include<iostream>
using namespace std;

// const参数的重载测试
void fun(int x){}
// void fun(const int x){}		// 常量作为形参，跟不加const完全等价

void fun2(int * p){}
// void fun2(int * const pc ){}  //指针常量做形参，也跟不加cosnt等价

void fun3(int & x){}
void fun3(const int &x){}   // 合法重载

void fun4(int * p){}
void fun4(const int * p){}  // 常量指针

void print(int i)
{
	cout << "int："<< i << endl;
}
void print(double i)
{
	cout << "double：" << i << endl;
}
void print(string i)
{
	cout << "string：" << i << endl;
}
int main()
{
	int i = 1;
	fun(1);
	int* p = &i;
	int* const pc = p;
	// pc = p;
	p = pc;

	// 引用
	int& i2 = i;
	// int& i3 = i;	//错误
	const int& ci2 = i2;
	const int& ci3 = i;

	void print(int i);   // 声明
	void print(string i);   // 声明

	print(1);
	print(1.1);
	print("1.2");
}