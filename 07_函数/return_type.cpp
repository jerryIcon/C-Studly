#include<iostream>
using namespace std;

// 1.返回数组指针
int(*fun(int x))[5]
{

}

// 2.typedef别名
typedef int arrayT[5];		// arrayT是一个自定义的类型别名，表示长度为5的int数组
arrayT* fun2(int x)
{

}

// 3.尾置返回类型
auto func(int x) -> int(*) [5]
{

}

int main()
{
	// 1.返回数组指针
	int arr[5] = { 1,2,3,4,5 };
	int* arp[5];			// 指针数组
	int(*app)[5] = &arr;	// 数组指针
	int(*fun(int x))[5];    // 函数声明，返回值为数组指针

	// 2.简化函数声明
	typedef int arrayT[5];	// arrayT是一个自定义的类型别名，表示长度为5的int数组
	arrayT* fun2(int x);

	// 3.尾置返回类型
	auto fun3(int x) -> int(*)[5];
}
