#include<iostream>
#include<vector>
using namespace std;

// StudenInfo �ṹ��
struct StudenInfo
{
	string name;
	int age;
	double score;
}stu1, stu2{"С��", 19, 41.0};
// ����ֱ�� �������󲢳�ʼ�� stu1, stu2{"С��", 19, 41.0};

void printInfo(StudenInfo stu) {
	cout << "name : " << stu.name << "\t age : " << stu.age << "\t score : " << stu.score << endl;
}

int main()
{
	// ��������
	StudenInfo stu4{ "С��", 19, 41.0 };
	StudenInfo stu5 = {};

	StudenInfo stu6;
	stu6 = stu5;

	cout << "name : " << stu4.name << "age : " << stu4.age << endl;

	printInfo(stu2);
	printInfo(stu6);

	// �ṹ������
	StudenInfo students[3] = {
		{"xx"},
		{"xx"},
		{"xx"}
	};

	vector<StudenInfo> vs;
	vs.size();
	vs.push_back(stu4);
}