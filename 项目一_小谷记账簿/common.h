#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define INCOME "收入"
#define EXPAND "支出"
#define FILENAME "F:\\project\\C++\\study\\C++学习项目\\项目一_小谷记账簿"

using namespace std;

// 通用功能性函数声明

// 绘制菜单
void showMainMenu();
void showAccountngMenu();
void showQueryMenu();

// 读取合法性校验
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();