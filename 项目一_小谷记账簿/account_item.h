#pragma once
#include "common.h"

// �˵�
struct  AccountItem
{
	string itemType;
	int amount;
	string detail;
};

// �����Ŀ���ݽ��в����ĺ�������

// ������Ŀ
void loadDataFromFile(vector<AccountItem>& items);

// ����
void accounting(vector<AccountItem>& items);
void insertIntoFile(const AccountItem& item);
void income(vector<AccountItem>& items);
void expand(vector<AccountItem>& items);
void record(vector<AccountItem>&, const string);

// ��ѯ
void query(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items, const string);
void queryItems(const vector<AccountItem>& items);
void printItem(const AccountItem& item);