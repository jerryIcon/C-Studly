#include<iostream>
using namespace std;

// 二分查找
int binary(const int(&arr)[10], int start, int end, int target)
{
	if (target < arr[start] || target > arr[end] || start > end)
		return -1;
	int mid = (start + end) / 2;
	if (target > arr[mid])
	{
		return	binary(arr, mid + 1, end, target);
	}
	else if (target < arr[mid])
	{
		return binary(arr, start, mid - 1, target);
	}
	else {
		return mid;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9, 10 };
	cout << "二分查找：" << binary(arr, 0, 9, 2) << endl;
}