#include<iostream>
using namespace std;
/*
	1.����	
				��С�ߴ�
		bool
		char(1)		255
		short(2)
		int(2)
		long(4)
		long long(8)
		��ͬƽ̨�ĳ��Ȳ�һ�� һ����� short Ϊ 2�ֽڣ�int �� long Ϊ 4�ֽ�
	2. sizeof  ��ȡ�ֽ�
	3.�޷�������
		unsigned ͨ���޷������ν����洢��������һ��
	4.ԭ��
		һ��ȫ���� int;
		������ long long;
		ȷ��������Ϊ���� ���޷�������
	5.�ַ�����
		char c = 65;
		C++ ���ַ����ͽ��С����ݡ� �ṩ��һ�� �����ַ������� wchar_t �ײ��Ӧ��һ������ short\int
		char �ַ� 8λ
		wchar_t ���ַ� 16λ
		char16_t Unicode�ַ� 16λ
		char32_t Unicode�ַ� 32λ
	6.bool����
		bool b1 = true / false
	7.��������
		������ float 4�ֽ�
		˫���� double 8�ֽ�
		������ long double 12��16�ֽ�
	8.����ֵ����
		1.��������ֵ
			30		ʮ������
			036		�˽�����
			0x1E	ʮ��������
			�˽��� - �� ʮ���� 36-�� 3 * 8^1 + 6 * 8^0 
			
			������������ֵʱ���������һ����׺ ��ȷ��ʲô����
			Ĭ��int
			l��L ��ʾlong
			ll��LL ��ʾlong long
			u����U ��ʾ unsigned �޷���
		2.������������ֵ
			Ĭ�� ��ʾ double
			f��F ��ʾ float
			l��L ��ʾ long double
		3. �ַ�
			������	char c = 'A';
		4. �ַ���
			˫���� "asd"
		5.ת����� \
	9.����ת��
		1.����ֵ��ֵ��bool����
			bool btrans = 25;		// btrans = 1
		2.�� bool ��ֵ����������
			short strans = false;   // strans = 0
		3.��������ֵ�����Ρ�

			ȥ��С������
		4.������ֵ��С��
			���� .0
		5. ��ֵ���������ͷ�Χ
			�������
			
*/
int main() 
{
	short a = 20;
	cout << "a = " << endl;
	cout << "a�ĳ��ȣ�" << sizeof a << endl;

	// ����
	short s1 = 40000;  // �������
	// �޷�������
	unsigned short s2 = 40000;  // ���ݲ������ͨ���޷������ν����洢��������һ��
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;

	// �ַ�����
	char c = 65;
	cout << "c = " << c << endl;
	char c1 = c + 1;
	cout << "c1 = " << c1 << endl;
}