#include<iostream>
using namespace std;
// 函数声明
void welcom();
/*
	int main()
		1.主函数，只有一个
		2.默认主函数可以，不写默认返回0
	using namespace std;
		使用了std命名空间后可以省略std::
	注释：
		1.单行注释 //
		2.多行注释
	cout 输出
	cin 输入

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
	在其他文件中需要加函数声明
		// 函数声明
		void welcom();
*/



int main()
{
	// std::cout << "Hello World!" << std::endl;
	cout << "Hello World!" << endl; // 输出

	welcom();

	cin.get(); // 等待键盘输入
	cin.get(); // 解决结束不自动退出
}