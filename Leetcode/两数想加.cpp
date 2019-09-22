/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *p = new ListNode(-1);
		ListNode *New = p;
		int sum;
		int f = 0;
		while (l1 != NULL || l2 != NULL) {
			sum = 0;
			if (l1 != NULL) {sum += l1->val; l1 = l1->next;}
			if (l2 != NULL) {sum += l2->val; l2 = l2->next;}
			if (f) sum++;
			New->next = new ListNode(sum % 10);
			New = New->next;
			f = (sum >= 10) ? 1 : 0;
		}
		if (f) New->next = new ListNode(1);
		return head->next;
	}
};