#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define INCOME "����"
#define EXPAND "֧��"
#define FILENAME "F:\\project\\C++\\study\\C++ѧϰ��Ŀ\\��Ŀһ_С�ȼ��˲�"

using namespace std;

// ͨ�ù����Ժ�������

// ���Ʋ˵�
void showMainMenu();
void showAccountngMenu();
void showQueryMenu();

// ��ȡ�Ϸ���У��
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();