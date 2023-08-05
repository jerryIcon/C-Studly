#include<iostream>
// 常量 没有数据类型 不安全
#define PI 3.14
// const 
const float Area = 3.14;
using namespace std;

/*
*	变量的声明和赋值
	1. 定义局部变量 局部变量必须 定义+初始化
		int a, b;      X 未赋值，初始化失败
		int a = 1, b;  初始化 a 成功
		int a = 1, b;  
		b = 10;			b 初始化成功
		建议定义时初始化!

	2. 修改变量
		b = 10;
		b = 20;

	3. 范围更小的变量域  > 范围更大的变量域

	4. 全局变量可以不用初始化 int 默认 0
		int number;

	5. 访问全局变量
		::number

	6. 常量 (不能修改) (必须初始化 + 赋值)
	 1) 使用 #define 来定义 “宏定义” 
		#define ZERO 0
	 2) 使用 const 限定符 
		const float AREA = 3.14; 
	7.整形	
					最小尺寸
		bool
		char(1)		255
		short(2)
		int(2)
		long(4)
		long long(8)
		不同平台的长度不一样 一般情况 short 为 2字节，int 和 long 为 4字节
*/

// 定义一个全局变量
int number = 10;
int main()
{
	// 定义变量
	int a = 1, b;
	b = 10;
	cout << "a = " << a << endl;

	// 定义局部变量
	int number = 1;
	cout << "number =" << number << endl;

	// 访问全局变量 :: 
	cout << "number =" << ::number << endl;

	// 访问常量
	cout << "PI =" << PI << endl;

	cout << "Area =" << Area << endl;
}