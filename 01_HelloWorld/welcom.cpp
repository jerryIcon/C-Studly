#include<iostream>
using namespace std;

// 定义一个欢迎函数
void welcom()
{
	cout << "请输入您的姓名" << endl;

	// 保存键盘的输入信息
	string name;

	cin >> name;

	// 输出
	cout << "欢迎您" + name << endl;
}