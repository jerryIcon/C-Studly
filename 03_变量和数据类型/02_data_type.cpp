#include<iostream>
using namespace std;
/*
	1.整形	
				最小尺寸
		bool
		char(1)		255
		short(2)
		int(2)
		long(4)
		long long(8)
		不同平台的长度不一样 一般情况 short 为 2字节，int 和 long 为 4字节
	2. sizeof  获取字节
	3.无符号整形
		unsigned 通过无符号整形将最多存储数据扩大一倍
	4.原则
		一般全部用 int;
		超出用 long long;
		确定不可能为负数 用无符号类型
	5.字符类型
		char c = 65;
		C++ 对字符类型进行“扩容” 提供了一种 “宽字符”类型 wchar_t 底层对应另一种整形 short\int
		char 字符 8位
		wchar_t 宽字符 16位
		char16_t Unicode字符 16位
		char32_t Unicode字符 32位
	6.bool类型
		bool b1 = true / false
	7.浮点类型
		单精度 float 4字节
		双精度 double 8字节
		长精度 long double 12或16字节
	8.字面值常量
		1.整形字面值
			30		十进制数
			036		八进制数
			0x1E	十六进制数
			八进制 - 》 十进制 36-》 3 * 8^1 + 6 * 8^0 
			
			定义整形字面值时会给它加上一个后缀 明确是什么类型
			默认int
			l或L 表示long
			ll或LL 表示long long
			u或者U 表示 unsigned 无符号
		2.浮点类型字面值
			默认 表示 double
			f或F 表示 float
			l或L 表示 long double
		3. 字符
			单引号	char c = 'A';
		4. 字符串
			双引号 "asd"
		5.转义符号 \
	9.类型转换
		1.整数值赋值给bool类型
			bool btrans = 25;		// btrans = 1
		2.将 bool 赋值给算数整形
			short strans = false;   // strans = 0
		3.浮点数赋值给整形、

			去除小数部分
		4.整数赋值给小数
			加上 .0
		5. 赋值超出了整型范围
			数据溢出
			
*/
int main() 
{
	short a = 20;
	cout << "a = " << endl;
	cout << "a的长度：" << sizeof a << endl;

	// 整形
	short s1 = 40000;  // 数据溢出
	// 无符号整形
	unsigned short s2 = 40000;  // 数据不溢出，通过无符号整形将最多存储数据扩大一倍
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;

	// 字符类型
	char c = 65;
	cout << "c = " << c << endl;
	char c1 = c + 1;
	cout << "c1 = " << c1 << endl;
}