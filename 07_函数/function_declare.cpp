#include<iostream>
using namespace std;

// �������� ����Ȼ�ᱨ��
int square(int x);

int main()
{
	int n = 6;
	cout << n << "��ƽ����" << square(n) << endl;

	n = 3.5;
	cout << n << "��ƽ����" << square(n) << endl;  // 9 �Զ�����ת��  

	cout << 'a' << "��ƽ����" << square('a') << endl;  // �Զ�����ת��   ASCll ��

}


int square(int x)
{
	return x * x;
}
