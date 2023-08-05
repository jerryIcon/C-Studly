#include<iostream>
#include<vector>
using namespace std;

// StudenInfo 结构体
struct StudenInfo
{
	string name;
	int age;
	double score;
}stu1, stu2{"小明", 19, 41.0};
// 可以直接 创建对象并初始化 stu1, stu2{"小明", 19, 41.0};

void printInfo(StudenInfo stu) {
	cout << "name : " << stu.name << "\t age : " << stu.age << "\t score : " << stu.score << endl;
}

int main()
{
	// 创建对象
	StudenInfo stu4{ "小蓝", 19, 41.0 };
	StudenInfo stu5 = {};

	StudenInfo stu6;
	stu6 = stu5;

	cout << "name : " << stu4.name << "age : " << stu4.age << endl;

	printInfo(stu2);
	printInfo(stu6);

	// 结构体数组
	StudenInfo students[3] = {
		{"xx"},
		{"xx"},
		{"xx"}
	};

	vector<StudenInfo> vs;
	vs.size();
	vs.push_back(stu4);
}