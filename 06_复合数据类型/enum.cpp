#include<iostream>
using namespace std;

// 定义一个枚举
enum Week
{
	Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun
};

int main()
{
	Week w1 = Mon, w2 = Tue;
	//Week w3 = 3; // 错误

	Week w3 = Week(3);
	Week w4 = Fri;
	Week w5 = Week(22);


	cout << "w1 = " << w1 << endl;	// 0
	cout << "w2 = " << w2 << endl;	// 1
	cout << "w3 = " << w3 << endl;	// 3
	cout << "w4 = " << w4 << endl;	// 11
	cout << "w5 = " << w5 << endl;	// 22

}