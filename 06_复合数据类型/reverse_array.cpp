#include<iostream>
#include<vector>
using namespace std;

/*
	翻转一个数组
*/

int main()
{
	const int n = 8;
	int array[n] = { 1,2,3,4,5,6,7,8 };
	int newArray[n];
	// 1.创建一个新数组方法
	for (size_t i = 0; i < n; i++)
	{
		newArray[n - i - 1] = array[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		cout << newArray[i] << "\t" ;
	}
	cout << endl;

	// 2.双指针
	int head = 0, tail = n - 1;
	while (head < tail) 
	{
		int temp = array[head];
		array[head] = array[tail];
		array[tail] = temp;
		++head;
		--tail;
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
}