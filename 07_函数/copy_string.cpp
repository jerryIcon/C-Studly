#include<string>
using namespace std;
/*
* ��str����n��
*/
string copyStr(string str, int n)
{
	string s;
	for (size_t i = 1; i <= n; i++)
	{
		s += str;
	}
	return s;
}