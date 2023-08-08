#include "common.h"

// ��ȡ�Ϸ���У��
char readMenuSelection(int options)
{
	string str;
	while (true)
	{
		getline(cin, str);

		// ���кϷ���У��
		if (str.size() != 1 || str[0] - '0' <= 0 || str[0] - '0' > options)
		{
			cout << "�������������ѡ��";
		}
		else {
			break;
		}
	}
	return str[0];
}

char readQuitConfirm()
{
	string str;
	while (true)
	{
		getline(cin, str);

		// ���кϷ���У��
		if (str.size() != 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N')
		{
			cout << "������������´���Y/N����";
		}
		else {
			break;
		}
	}
	return toupper(str[0]);
}

int readAmount()
{
	int amount = 0;
	string str;
	while (true)
	{
		getline(cin, str);

		// ���кϷ���У��
		try
		{
			amount = stoi(str);
			break;
		}
		catch (invalid_argument e)
		{
			cout << "��������������";
		}
	}
	return amount;
}