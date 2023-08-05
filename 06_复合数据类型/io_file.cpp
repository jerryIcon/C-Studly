#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
	1.按照单词逐个读取
	string world;
	while (input >> world) {
		cout << world << endl;
			hello
			world
			hello
			C++
	}

	2.逐行读取
	string line;
	while (getline(input, line)) {
		cout << line << endl;
	}

	3. 逐个字符读取
	char ch;
	while (input >> ch)    // = input.get(ch)
	{
		cout << ch << endl;
	}


*/

int main()
{
	ifstream input("input.txt");

	// 4.输出
	ofstream output("output.txt");

	char ch;
	while (input.get(ch))
	{
		// 输出
		output << ch << endl;
	}

	
}