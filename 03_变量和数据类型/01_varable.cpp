#include<iostream>
// ���� û���������� ����ȫ
#define PI 3.14
// const 
const float Area = 3.14;
using namespace std;

/*
*	�����������͸�ֵ
	1. ����ֲ����� �ֲ��������� ����+��ʼ��
		int a, b;      X δ��ֵ����ʼ��ʧ��
		int a = 1, b;  ��ʼ�� a �ɹ�
		int a = 1, b;  
		b = 10;			b ��ʼ���ɹ�
		���鶨��ʱ��ʼ��!

	2. �޸ı���
		b = 10;
		b = 20;

	3. ��Χ��С�ı�����  > ��Χ����ı�����

	4. ȫ�ֱ������Բ��ó�ʼ�� int Ĭ�� 0
		int number;

	5. ����ȫ�ֱ���
		::number

	6. ���� (�����޸�) (�����ʼ�� + ��ֵ)
	 1) ʹ�� #define ������ ���궨�塱 
		#define ZERO 0
	 2) ʹ�� const �޶��� 
		const float AREA = 3.14; 
	7.����	
					��С�ߴ�
		bool
		char(1)		255
		short(2)
		int(2)
		long(4)
		long long(8)
		��ͬƽ̨�ĳ��Ȳ�һ�� һ����� short Ϊ 2�ֽڣ�int �� long Ϊ 4�ֽ�
*/

// ����һ��ȫ�ֱ���
int number = 10;
int main()
{
	// �������
	int a = 1, b;
	b = 10;
	cout << "a = " << a << endl;

	// ����ֲ�����
	int number = 1;
	cout << "number =" << number << endl;

	// ����ȫ�ֱ��� :: 
	cout << "number =" << ::number << endl;

	// ���ʳ���
	cout << "PI =" << PI << endl;

	cout << "Area =" << Area << endl;
}