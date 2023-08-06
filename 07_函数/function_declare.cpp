#include<iostream>
using namespace std;

// 声明函数 ，不然会报错
int square(int x);

int main()
{
	int n = 6;
	cout << n << "的平方：" << square(n) << endl;

	n = 3.5;
	cout << n << "的平方：" << square(n) << endl;  // 9 自动类型转换  

	cout << 'a' << "的平方：" << square('a') << endl;  // 自动类型转换   ASCll 码

}


int square(int x)
{
	return x * x;
}
