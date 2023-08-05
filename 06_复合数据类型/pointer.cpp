#include<iostream>
using namespace std;

int main()
{
	// 定义指针
	int* p1;
	long* p2;
	long long* p3;

	// 在 64位系统中 每个内存地址占 64位（8字节）
	// 所以 p1 p2 p3 都占 8字节
	cout << "p1在内存中的长度为：" << sizeof(p1) << endl;
	cout << "p2在内存中的长度为：" << sizeof(p2) << endl;
	cout << "p3在内存中的长度为：" << sizeof(p3) << endl;

	// 指针的使用
	int a = 10;
	int b = 20;
	long c = 35;

	// 将a的8字节地址 赋值给 p1
	p1 = &a;
	cout << "a的地址：" << &a << endl;
	cout << "p1的值：" << p1 << endl;
	p2 = &c;
	cout << "c的地址：" << &c << endl;
	cout << "p2的值：" << p2 << endl;

	// 解引用 
	// p1 存放的是a的地址 
	// *p1 是获取该地址的值
	*p1 = 12;
	cout << "*p1的值：" << *p1 << endl;
	cout << "a的值：" << a << endl;

	// 无效指针（野指针） 指针没有初始化
	// int* p3;
	// *p3 = 100;   //非常危险

	// 空指针 三种方式空指针
	int* np = nullptr;	 // 推荐使用这种
	np = NULL;
	np = 0;

	// void* 指针：可以存放任意对象的地址
	int iv = 100;
	char cv = 'a';
	string sv = "hh";

	void* vp = &iv;
	vp = &cv;
	vp = &sv;

	// void * 指针不能解引用
	// *vp;

	cout << "-----------------------------" << endl;

	// ** 指向指针的指针
	int i = 1024;
	int* pi = &i;
	int** ppi = &pi;

	cout << "i的地址：" << &i << endl;
	cout << "pi的地址：" << pi << endl;
	cout << "ppi的地址：" << ppi << endl;

	cout << "i的值：" << i << endl;
	cout << "pi的解引用：" << *pi << endl;
	cout << "ppi的解引用：" << *ppi << endl;

	cout << "-----------------------------" << endl;

	// 指向常量的指针 (常量指针)
	const int c1 = 100, c2 = 200;
	// int* cp1 = &c1; 错误
	const int* cp1 = &c1;
	cout << "*cp1 = " << *cp1 << endl;

	// 指向常量的指针是可以改变的 它不属于常量
	cp1 = &c2;
	cout << "*cp1 = " << *cp1 << endl;	

	// 指针常量   初始化 必须指向变量
	int* const cp = &a;
	// cp = &b;  错误
	*cp = 12;
	cout << "a = " << a << endl;	// 12

	// 指向常量的指针常量
	const int* const ccp = &c1;

	cout << "-----------------------------" << endl;


	// 指针数组
	// 数组地址 是指向 数组的第一个元素的地址
	int arr[] = { 1,4,5,8,0 };
	cout << "arr = " << arr << endl;
	cout << "&arr[0] = " << &arr[0] << endl;
	cout << "&arr[1] = " << &arr[1] << endl;

	int* pia = arr;
	cout << "pia = " << pia << endl;  //  = arr = &arr[0]
	cout << "*pia = " << *pia << endl;   // arr[0] = 1

	// 指针运算  pia + 1 指向下一个字节 相当于 &arr[1]
	cout << "pia + 1 = " << (pia + 1) << endl;  //  &arr[1]
	cout << "*(pia + 1) = " << *(pia + 1) << endl;  //  arr[1] = 4

	cout << "arr + 2 = " << (arr + 2) << endl;  //  &arr[2]
	cout << "*(arr + 2) = " << *(arr + 2) << endl;  //  arr[2] = 5

	cout << "-----------------------------" << endl;


	// 指针数组 和 数组指针
	int* pa[5];		//指针数组：数组的元素都是指针类型，它是一个数组
	int(* ap)[5];	//数组指针：指向一个int[5]数组的指针，它是一个指针
	cout << "pa在内存中的长度：" << sizeof(pa) << endl;  // 5 个元素 5 * 8 = 40
	cout << "ap在内存中的长度：" << sizeof(ap) << endl;  // 一个指针 8 
		
	pa[0] = &a;			// 存放地址
	pa[1] = arr;		// 地址
	pa[2] = arr + 3;	// 地址

	ap = &arr;	//ap指向的是整个int[5]的数组的地址
	cout << "ap = " << ap << endl;   // &arr
	cout << "*ap = " << *ap << endl;   // &arr
	cout << "**ap = " << **ap << endl;   // arr[0]
	cout << "*(*ap + 1) = " << *(*ap + 1) << endl;   // arr[1]
}