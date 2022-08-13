/*
* @Author: 100yang
* @Date:   2020-08-21
* @Last Modified by:   100yang
* @Last Modified time: 2020-08-21
*/
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
  public:
	int minDepth(TreeNode* root) {
		if (root == nullptr) {
			return 0;
		}
		if (root->left == nullptr || root->right == nullptr) {
			return 1;
		}
		int deep = INT_MAX;
		if (root->left != nullptr) {
			deep = min(minDepth(root->left), deep);
		}
		if (root->right != nullptr) {
			deep = min(minDepth(root->right), deep);
		}
		return deep + 1;
	}
};

int main() {
	return 0;
}