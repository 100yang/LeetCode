/*
* @Author: 100yang
* @Date:   2020-08-08
* @Last Modified by:   100yang
* @Last Modified time: 2020-08-08
*/
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
  public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *tmp = new ListNode(0);
		ListNode *end = new ListNode(0);
		end = head;
		tmp = head;
		int num = 0;
		while (end) {
			end = end->next;
			num++;
		}
		int i = num - n - 1;
		end = tmp;
		while (i > 0) {
			i--;
			end = end->next;
		}
		end->next = end->next->next;
		return tmp;
	}
	ListNode* CreatLink(int n) {
		ListNode* p = (ListNode*)malloc(sizeof(ListNode));//创建一个头节点
		ListNode* tmp = p;//声明一个指针指向头节点，遍历链表
		for (int i = 0; i < n; ++i) {
			if (i == 0) {p->val = rand() % 100; continue;}
			ListNode* a = (ListNode*)malloc(sizeof(ListNode));
			a->val = rand() % 100;
			a->next = NULL;
			tmp->next = a;
			tmp = tmp->next;
		}
		return p;
	}
	void println(ListNode *head) {
		ListNode* tmp = head;
		while (tmp) {
			printf("%d ", tmp->val);
			tmp = tmp->next;
		}
	}
} mm;
int main() {
	int n, num;
	cin >> n;
	ListNode* head = mm.CreatLink(n);
	mm.println(head);
	cin >> num;
	ListNode* p = mm.removeNthFromEnd(head, num);
	puts("");
	mm.println(p);
	return 0;
}