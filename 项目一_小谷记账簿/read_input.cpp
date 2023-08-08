#include "common.h"

// 读取合法性校验
char readMenuSelection(int options)
{
	string str;
	while (true)
	{
		getline(cin, str);

		// 进行合法性校验
		if (str.size() != 1 || str[0] - '0' <= 0 || str[0] - '0' > options)
		{
			cout << "输入错误，请重新选择：";
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

		// 进行合法性校验
		if (str.size() != 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N')
		{
			cout << "输入错误，请重新错误（Y/N）：";
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

		// 进行合法性校验
		try
		{
			amount = stoi(str);
			break;
		}
		catch (invalid_argument e)
		{
			cout << "输入错误，请输入金额：";
		}
	}
	return amount;
}