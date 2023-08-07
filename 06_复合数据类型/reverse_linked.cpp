#include<iostream>
#include "list_node.h"
using namespace std;

int main()
{
	// 定义链表 1 -> 2 -> 3 -> 4 -> 5 -> NULL
	ListNode node5 = { 5, nullptr };
	ListNode node4 = { 4, &node5 };
	ListNode node3 = { 3, &node4 };
	ListNode node2 = { 2, &node3 };
	ListNode node1 = { 1, &node2 };

	ListNode* list = &node1;

	ListNode* np = list;

	while (np != nullptr)
	{
		cout << (*np).value << " -> ";
		np = (*np).next;
	}

	cout << "NULL" << endl;

	// 当前节点
	ListNode* curr = list;
	// 上一个节点
	ListNode* prev = nullptr;
	while (curr != nullptr)
	{
		// 保存临时节点
		ListNode* temp = (*curr).next;
		// 当前指针的next指向上一个
		(*curr).next = prev;

		// 往后走
		prev = curr;
		curr = temp;
	}
	ListNode* newList = prev;

	while (newList != nullptr)
	{
		cout << (*newList).value << " -> ";
		newList = (*newList).next;
	}

	cout << "NULL" << endl;

}