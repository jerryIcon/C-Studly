#include<iostream>
using namespace std;


int main()
{
	// ���������
	string num1 = "325359430209355274352432875";
	string num2 = "9323298429842985843509";

	string result;

	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	int carry = 0;
	

	while (p1 >= 0 || p2 >= 0 || carry != 0)
	{
		// 1.��ȡ��ǰλ��ֵ
		// num1[p1] ��ȡ�� char ASCILL - '0'�õ�ֵ
		int x = (p1 >= 0) ? num1[p1] - '0' : 0;
		int y = (p2 >= 0) ? num2[p2] - '0' : 0;
		int sum = x + y + carry;
		// �õ���λֵ
		carry = sum / 10;
		
		result += sum % 10 + '0';
		--p1;
		--p2;
	}

	// ��ת
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