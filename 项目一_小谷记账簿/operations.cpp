#include "common.h"
#include "account_item.h"

// 加载账目
void loadDataFromFile(vector<AccountItem>& items)
{
	ifstream input(FILENAME);

	// 逐行读取每一条账目、包装成AccountItem
	AccountItem item;
	while (input >> item.itemType >> item.amount >> item.detail)
	{
		items.push_back(item);
	}
	input.close();
}

// 记账
void accounting(vector<AccountItem>& items)
{
	char key = readMenuSelection(3);
	switch (key)
	{
	case '1':
		// 收入
		income(items);
		break;
	case '2':
		// 支出
		expand(items);
		break;
	default:
		// 返回主菜单
		break;
	}
}


// 收入
void income(vector<AccountItem>& items)
{
	
	record(items, INCOME);
}

// 支出
void expand(vector<AccountItem>& items)
{

	record(items, EXPAND);
}

// 记账功能
void record(vector<AccountItem>& items, const string type)
{
	// 新构建一个accountItem
	AccountItem item;

	item.itemType = type;
	
	if (type == INCOME)
	{
		cout << "\n本次收入金额：";
		item.amount = readAmount();
	}
	else if(type == EXPAND){
		cout << "\n本次支出金额：";
		item.amount = -readAmount();
	}


	cout << "\n备注：";
	getline(cin, item.detail);

	items.push_back(item);

	// 写入文件
	insertIntoFile(item);

	// 显示成功
	cout << "\n-----------记账成功！----------\n" << endl;
	cout << "\n请按任意键返回主菜单" << endl;
	string line;
	getline(cin, line);
}

// 持久化account
void insertIntoFile(const AccountItem & item)
{
	ofstream output(FILENAME, ios::out | ios::app);
	
	cout << item.itemType << "\t" << item.amount << "\t" << item.detail << endl;
	
	output.close();
}

// 查询功能
void query(const vector<AccountItem>& items)
{
	/*
		1 统计所有账目
		2 统计收入
		3 统计支出
		4 返回主菜单
	*/
	char key = readMenuSelection(4);
	switch (key)
	{
	case '1':
		// 统计所有账目
		queryItems(items);
		break;
	case '2':
		// 统计收入
		queryItems(items, INCOME);
		break;
	case '3':
		// 统计支出
		queryItems(items, EXPAND);
		break;
	default:
		// 返回主菜单
		break;
	}
}

void queryItems(const vector<AccountItem>& items)
{
	cout << "-------------查询结果-----------" << endl;
	cout << "\n类型\t \t金额\t\ \t备注\n" << endl;

	int  total = 0;
	for (AccountItem item : items)
	{
		printItem(item);
		total += item.amount;
	}

	// 输出信息
	cout << "===========================\n" << endl;
	cout << "总收支：" << total << endl;
	cout << "\n请按任意键返回主菜单" << endl;
	string line;
	getline(cin, line);

}
// 查询账目功能
void queryItems(const vector<AccountItem>& items,const string type)
{
	cout << "-------------查询结果-----------" << endl;
	cout << "\n类型\t \t金额\t\ \t备注\n" << endl;

	int  total = 0;
	for (AccountItem item : items)
	{
		if (item.itemType == type)
		{
			printItem(item);
			total += item.amount;
		}
		
	}

	// 输出信息
	cout << "===========================\n" << endl;
	cout <<((type == INCOME) ? "总收入" : "总收支：") << total << endl;
	cout << "\n请按任意键返回主菜单" << endl;
	string line;
	getline(cin, line);
}

void printItem(const AccountItem& item)
{
	cout << item.itemType << "\t \t" << item.amount << "\t \t" << item.detail << endl;
}