#include<iostream>
#include<string>
using namespace std;

string stuInfo(string name = "", int age = 8, double score = 60)
{
	string info = "ѧ��������" + name + "\t���䣺" + to_string(age) + "\tƽ���ɼ���" + to_string(score);
	return info;
}
const string& longerStr(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}

int main() 
{
	// ����ָ�� 
	string(*fp)(string, int, double) = nullptr;
	const string& (*fp2)(const string&, const string&);

	// 1������ָ�븳ֵ
	fp = &stuInfo;
	// 2������ָ�븳ֵ  �ȼ�
	fp = stuInfo;		// �������Զ�ת����ָ��

	// �����õ���
	cout << (*fp)("xcf1", 18, 90) << endl;
	// ʡ�Խ����õ���
	cout << fp("xcf2", 18, 90) << endl;

	fp2 = &longerStr;
	fp2 = longerStr;

	// ����ָ����Ϊ�β�
	void selectStr(const string&, const string&, const string & (const string&, const string&));	// ʡ���β���
	void selectStr(const string & str1, const string & str2, const string & fp (const string&, const string&));		// ��
	void selectStr(const string& str1, const string& str2, const string & (*fp) (const string & , const string & ));	// ����

	// typedef �������ͱ���
	typedef const string& Func (const string&, const string&);
	void selectStr(const string&, const string&, Func);	

	typedef const string& (*Funcp) (const string&, const string&);
	void selectStr(const string&, const string&, Funcp);

	// C++ 11 decltype ��ȡ��������
	typedef decltype(longerStr) Func2;
	typedef decltype(longerStr) *Funcp2;

	void selectStr(Func2);
	void selectStr(Funcp2);

	// ����ָ����Ϊ����ֵ
	// Func fun(int); // ����
	Func* fun(int);
	Funcp fun2(int);

	// β�÷�������
	auto fun3(int) -> Func*; 
	auto fun3(int) -> Funcp;


}