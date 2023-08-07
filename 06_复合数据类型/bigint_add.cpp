#include<iostream>
using namespace std;


int main()
{
	// 大整数相加
	string num1 = "325359430209355274352432875";
	string num2 = "9323298429842985843509";

	string result;

	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	int carry = 0;
	

	while (p1 >= 0 || p2 >= 0 || carry != 0)
	{
		// 1.获取当前位的值
		// num1[p1] 获取到 char ASCILL - '0'得到值
		int x = (p1 >= 0) ? num1[p1] - '0' : 0;
		int y = (p2 >= 0) ? num2[p2] - '0' : 0;
		int sum = x + y + carry;
		// 得到进位值
		carry = sum / 10;
		
		result += sum % 10 + '0';
		--p1;
		--p2;
	}

	// 翻转
	int left = 0, right = result.size() - 1;
	while (left < right)
	{
		char temp = result[left];
		result[left] = result[right];
		result[right] = temp;
		++left;
		--right;
	}

	cout << num1 << " + " << num2 << " = " <<result;
	

}