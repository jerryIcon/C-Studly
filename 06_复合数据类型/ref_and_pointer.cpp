#include<iostream>
using namespace std;

/*
	引用和指针
	引用的本质：C++的一种语法糖，它是对指针的一种伪装；
*/
int main() 
{
	int a = 10;
	// 引用和指针常量
	int& ref = a;
	int* const p = &a; 
	
	ref = 20;
	cout << "a = " << a << endl;
	*p = 30;	// 需要解引用
	cout << "a = " << a << endl;
	// 1、指针常量 会在内存中开辟空间  引用不会在内存中开辟空间
	cout << "a的地址：" << &a << endl;		// = &a
	cout << "ref的地址：" << &ref << endl;  // = &a
	cout << "p的地址：" << &p << endl;		// 开辟新内存
	cout << "p的值：" << p << endl;			//  = &a

	// 绑定指针的引用
	int* ptr = &a;
	int*& pref = ptr;	// 绑定的是 int* ptr 指针
	*pref = 40;			//  
	cout << "a = " << a << endl;

	// 绑定引用的指针
	// int&* p = &pref;   // 错误 没有指向引用的指针
}