#include<iostream>
using namespace std;

/*
	引用：相当于别名，在内存中不占用空间
*/
int main()
{
	// 1.引用，必须是引用一个变量
	int a = 10,b = 200;
	int& ref = a;  // 变量a的引用

	cout << "ref = " << ref << endl;  // s= 10;
	cout << "a的地址：" << &a << endl;
	cout << "ref的地址：" << &ref << endl;

	ref = 15;
	cout << "a = " << a << endl;

	ref = b;		 // 不会更改地址，只会修改值，类似与常量绑定的引用不会修改
	cout << "ref的地址：" << &ref << endl;
	cout << "a = " << a << endl;    //  a = 200;

	// 2.引用的引用
	int& rref = ref;
	rref = 36;
	cout << "a = " << a << endl;    //  a = 36;

	// 3.对 常量的引用（常量引用）
	const int zero = 0;
	// int & cref = zero  错误
	const int& cref = zero;
	// cref = 20;    错误

	int i = 30;
	const int& cref2 = i;   // 可以绑定一个变量
	const int& cref3 = 10;
	double d = 3.14;
	const int& cref4 = d;   // 可以绑定能互相转换的类型
	
	// 引用和常量引用的区别
	// cref2 = 40;  // 失败、不能对绑定引用的数据进行修改
	ref = 40;		// 成功、可以修改
}