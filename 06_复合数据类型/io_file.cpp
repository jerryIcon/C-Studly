#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
	1.���յ��������ȡ
	string world;
	while (input >> world) {
		cout << world << endl;
			hello
			world
			hello
			C++
	}

	2.���ж�ȡ
	string line;
	while (getline(input, line)) {
		cout << line << endl;
	}

	3. ����ַ���ȡ
	char ch;
	while (input >> ch)    // = input.get(ch)
	{
		cout << ch << endl;
	}


*/

int main()
{
	ifstream input("input.txt");

	// 4.���
	ofstream output("output.txt");

	char ch;
	while (input.get(ch))
	{
		// ���
		output << ch << endl;
	}

	
}