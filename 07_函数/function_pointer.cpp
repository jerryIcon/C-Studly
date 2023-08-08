#include<iostream>
#include<string>
using namespace std;

string stuInfo(string name = "", int age = 8, double score = 60)
{
	string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t平均成绩：" + to_string(score);
	return info;
}
const string& longerStr(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}

int main() 
{
	// 函数指针 
	string(*fp)(string, int, double) = nullptr;
	const string& (*fp2)(const string&, const string&);

	// 1、函数指针赋值
	fp = &stuInfo;
	// 2、函数指针赋值  等价
	fp = stuInfo;		// 函数会自动转换成指针

	// 解引用调用
	cout << (*fp)("xcf1", 18, 90) << endl;
	// 省略解引用调用
	cout << fp("xcf2", 18, 90) << endl;

	fp2 = &longerStr;
	fp2 = longerStr;

	// 函数指针作为形参
	void selectStr(const string&, const string&, const string & (const string&, const string&));	// 省略形参名
	void selectStr(const string & str1, const string & str2, const string & fp (const string&, const string&));		// 简化
	void selectStr(const string& str1, const string& str2, const string & (*fp) (const string & , const string & ));	// 完整

	// typedef 定义类型别名
	typedef const string& Func (const string&, const string&);
	void selectStr(const string&, const string&, Func);	

	typedef const string& (*Funcp) (const string&, const string&);
	void selectStr(const string&, const string&, Funcp);

	// C++ 11 decltype 获取函数类型
	typedef decltype(longerStr) Func2;
	typedef decltype(longerStr) *Funcp2;

	void selectStr(Func2);
	void selectStr(Funcp2);

	// 函数指针作为返回值
	// Func fun(int); // 错误
	Func* fun(int);
	Funcp fun2(int);

	// 尾置返回类型
	auto fun3(int) -> Func*; 
	auto fun3(int) -> Funcp;


}