#include<iostream>
#include "utils.h"
using namespace std;

// 指针形参
void call(int* x)
{
	++(*x);
}

// 引用形参
void call(int& x)  // 创建一个引用 int& x = n;
{
	++x;
}

// 比较两字符串大小 形参会进行拷贝 string str1, string str2，效率低
/*
bool isLonger(string str1, string str2)
{
	return str1.size() > str2.size();
}
*/

// 使用引用：string & str1, string & str2，传引用避免拷贝
bool isLonger(string & str1, string & str2)
{
	return str1.size() > str2.size();
}

// 使用常量引用： 不需要更值的时候 定义成常量指针
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
	// isLonger("hello", "world");  // 使用常量引用才能进行字面量传递
}