#include<iostream>
using namespace std;

// 1.��������ָ��
int(*fun(int x))[5]
{

}

// 2.typedef����
typedef int arrayT[5];		// arrayT��һ���Զ�������ͱ�������ʾ����Ϊ5��int����
arrayT* fun2(int x)
{

}

// 3.β�÷�������
auto func(int x) -> int(*) [5]
{

}

int main()
{
	// 1.��������ָ��
	int arr[5] = { 1,2,3,4,5 };
	int* arp[5];			// ָ������
	int(*app)[5] = &arr;	// ����ָ��
	int(*fun(int x))[5];    // ��������������ֵΪ����ָ��

	// 2.�򻯺�������
	typedef int arrayT[5];	// arrayT��һ���Զ�������ͱ�������ʾ����Ϊ5��int����
	arrayT* fun2(int x);

	// 3.β�÷�������
	auto fun3(int x) -> int(*)[5];
}
