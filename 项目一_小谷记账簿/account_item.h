#pragma once
#include "common.h"

// 账单
struct  AccountItem
{
	string itemType;
	int amount;
	string detail;
};

// 针对账目数据进行操作的函数声明

// 加载账目
void loadDataFromFile(vector<AccountItem>& items);

// 记账
void accounting(vector<AccountItem>& items);
void insertIntoFile(const AccountItem& item);
void income(vector<AccountItem>& items);
void expand(vector<AccountItem>& items);
void record(vector<AccountItem>&, const string);

// 查询
void query(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items, const string);
void queryItems(const vector<AccountItem>& items);
void printItem(const AccountItem& item);