/*
* @Author: 100yang
* @Date:   2020-08-07
* @Last Modified by:   100yang
* @Last Modified time: 2020-08-07
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == NULL && q == NULL) return true;
		else if (q == NULL || p == NULL) return false;
		else if (q->val != p->val) return false;
		else return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
} mm;
int mian() {
	return 0;
}