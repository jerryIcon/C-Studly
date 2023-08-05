#include<iostream>
using namespace std;

int main()
{
	// ����ָ��
	int* p1;
	long* p2;
	long long* p3;

	// �� 64λϵͳ�� ÿ���ڴ��ַռ 64λ��8�ֽڣ�
	// ���� p1 p2 p3 ��ռ 8�ֽ�
	cout << "p1���ڴ��еĳ���Ϊ��" << sizeof(p1) << endl;
	cout << "p2���ڴ��еĳ���Ϊ��" << sizeof(p2) << endl;
	cout << "p3���ڴ��еĳ���Ϊ��" << sizeof(p3) << endl;

	// ָ���ʹ��
	int a = 10;
	int b = 20;
	long c = 35;

	// ��a��8�ֽڵ�ַ ��ֵ�� p1
	p1 = &a;
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "p1��ֵ��" << p1 << endl;
	p2 = &c;
	cout << "c�ĵ�ַ��" << &c << endl;
	cout << "p2��ֵ��" << p2 << endl;

	// ������ 
	// p1 ��ŵ���a�ĵ�ַ 
	// *p1 �ǻ�ȡ�õ�ַ��ֵ
	*p1 = 12;
	cout << "*p1��ֵ��" << *p1 << endl;
	cout << "a��ֵ��" << a << endl;

	// ��Чָ�루Ұָ�룩 ָ��û�г�ʼ��
	// int* p3;
	// *p3 = 100;   //�ǳ�Σ��

	// ��ָ�� ���ַ�ʽ��ָ��
	int* np = nullptr;	 // �Ƽ�ʹ������
	np = NULL;
	np = 0;

	// void* ָ�룺���Դ���������ĵ�ַ
	int iv = 100;
	char cv = 'a';
	string sv = "hh";

	void* vp = &iv;
	vp = &cv;
	vp = &sv;

	// void * ָ�벻�ܽ�����
	// *vp;

	cout << "-----------------------------" << endl;

	// ** ָ��ָ���ָ��
	int i = 1024;
	int* pi = &i;
	int** ppi = &pi;

	cout << "i�ĵ�ַ��" << &i << endl;
	cout << "pi�ĵ�ַ��" << pi << endl;
	cout << "ppi�ĵ�ַ��" << ppi << endl;

	cout << "i��ֵ��" << i << endl;
	cout << "pi�Ľ����ã�" << *pi << endl;
	cout << "ppi�Ľ����ã�" << *ppi << endl;

	cout << "-----------------------------" << endl;

	// ָ������ָ�� (����ָ��)
	const int c1 = 100, c2 = 200;
	// int* cp1 = &c1; ����
	const int* cp1 = &c1;
	cout << "*cp1 = " << *cp1 << endl;

	// ָ������ָ���ǿ��Ըı�� �������ڳ���
	cp1 = &c2;
	cout << "*cp1 = " << *cp1 << endl;	

	// ָ�볣��   ��ʼ�� ����ָ�����
	int* const cp = &a;
	// cp = &b;  ����
	*cp = 12;
	cout << "a = " << a << endl;	// 12

	// ָ������ָ�볣��
	const int* const ccp = &c1;

	cout << "-----------------------------" << endl;


	// ָ������
	// �����ַ ��ָ�� ����ĵ�һ��Ԫ�صĵ�ַ
	int arr[] = { 1,4,5,8,0 };
	cout << "arr = " << arr << endl;
	cout << "&arr[0] = " << &arr[0] << endl;
	cout << "&arr[1] = " << &arr[1] << endl;

	int* pia = arr;
	cout << "pia = " << pia << endl;  //  = arr = &arr[0]
	cout << "*pia = " << *pia << endl;   // arr[0] = 1

	// ָ������  pia + 1 ָ����һ���ֽ� �൱�� &arr[1]
	cout << "pia + 1 = " << (pia + 1) << endl;  //  &arr[1]
	cout << "*(pia + 1) = " << *(pia + 1) << endl;  //  arr[1] = 4

	cout << "arr + 2 = " << (arr + 2) << endl;  //  &arr[2]
	cout << "*(arr + 2) = " << *(arr + 2) << endl;  //  arr[2] = 5

	cout << "-----------------------------" << endl;


	// ָ������ �� ����ָ��
	int* pa[5];		//ָ�����飺�����Ԫ�ض���ָ�����ͣ�����һ������
	int(* ap)[5];	//����ָ�룺ָ��һ��int[5]�����ָ�룬����һ��ָ��
	cout << "pa���ڴ��еĳ��ȣ�" << sizeof(pa) << endl;  // 5 ��Ԫ�� 5 * 8 = 40
	cout << "ap���ڴ��еĳ��ȣ�" << sizeof(ap) << endl;  // һ��ָ�� 8 
		
	pa[0] = &a;			// ��ŵ�ַ
	pa[1] = arr;		// ��ַ
	pa[2] = arr + 3;	// ��ַ

	ap = &arr;	//apָ���������int[5]������ĵ�ַ
	cout << "ap = " << ap << endl;   // &arr
	cout << "*ap = " << *ap << endl;   // &arr
	cout << "**ap = " << **ap << endl;   // arr[0]
	cout << "*(*ap + 1) = " << *(*ap + 1) << endl;   // arr[1]
}