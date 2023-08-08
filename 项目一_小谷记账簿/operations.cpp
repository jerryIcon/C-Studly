#include "common.h"
#include "account_item.h"

// ������Ŀ
void loadDataFromFile(vector<AccountItem>& items)
{
	ifstream input(FILENAME);

	// ���ж�ȡÿһ����Ŀ����װ��AccountItem
	AccountItem item;
	while (input >> item.itemType >> item.amount >> item.detail)
	{
		items.push_back(item);
	}
	input.close();
}

// ����
void accounting(vector<AccountItem>& items)
{
	char key = readMenuSelection(3);
	switch (key)
	{
	case '1':
		// ����
		income(items);
		break;
	case '2':
		// ֧��
		expand(items);
		break;
	default:
		// �������˵�
		break;
	}
}


// ����
void income(vector<AccountItem>& items)
{
	
	record(items, INCOME);
}

// ֧��
void expand(vector<AccountItem>& items)
{

	record(items, EXPAND);
}

// ���˹���
void record(vector<AccountItem>& items, const string type)
{
	// �¹���һ��accountItem
	AccountItem item;

	item.itemType = type;
	
	if (type == INCOME)
	{
		cout << "\n���������";
		item.amount = readAmount();
	}
	else if(type == EXPAND){
		cout << "\n����֧����";
		item.amount = -readAmount();
	}


	cout << "\n��ע��";
	getline(cin, item.detail);

	items.push_back(item);

	// д���ļ�
	insertIntoFile(item);

	// ��ʾ�ɹ�
	cout << "\n-----------���˳ɹ���----------\n" << endl;
	cout << "\n�밴������������˵�" << endl;
	string line;
	getline(cin, line);
}

// �־û�account
void insertIntoFile(const AccountItem & item)
{
	ofstream output(FILENAME, ios::out | ios::app);
	
	cout << item.itemType << "\t" << item.amount << "\t" << item.detail << endl;
	
	output.close();
}

// ��ѯ����
void query(const vector<AccountItem>& items)
{
	/*
		1 ͳ��������Ŀ
		2 ͳ������
		3 ͳ��֧��
		4 �������˵�
	*/
	char key = readMenuSelection(4);
	switch (key)
	{
	case '1':
		// ͳ��������Ŀ
		queryItems(items);
		break;
	case '2':
		// ͳ������
		queryItems(items, INCOME);
		break;
	case '3':
		// ͳ��֧��
		queryItems(items, EXPAND);
		break;
	default:
		// �������˵�
		break;
	}
}

void queryItems(const vector<AccountItem>& items)
{
	cout << "-------------��ѯ���-----------" << endl;
	cout << "\n����\t \t���\t\ \t��ע\n" << endl;

	int  total = 0;
	for (AccountItem item : items)
	{
		printItem(item);
		total += item.amount;
	}

	// �����Ϣ
	cout << "===========================\n" << endl;
	cout << "����֧��" << total << endl;
	cout << "\n�밴������������˵�" << endl;
	string line;
	getline(cin, line);

}
// ��ѯ��Ŀ����
void queryItems(const vector<AccountItem>& items,const string type)
{
	cout << "-------------��ѯ���-----------" << endl;
	cout << "\n����\t \t���\t\ \t��ע\n" << endl;

	int  total = 0;
	for (AccountItem item : items)
	{
		if (item.itemType == type)
		{
			printItem(item);
			total += item.amount;
		}
		
	}

	// �����Ϣ
	cout << "===========================\n" << endl;
	cout <<((type == INCOME) ? "������" : "����֧��") << total << endl;
	cout << "\n�밴������������˵�" << endl;
	string line;
	getline(cin, line);
}

void printItem(const AccountItem& item)
{
	cout << item.itemType << "\t \t" << item.amount << "\t \t" << item.detail << endl;
}