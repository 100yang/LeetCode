/*
* @Author: 100yang
* @Date:   2020-05-31
* @Last Modified by:   100yang
* @Last Modified time: 2020-08-07
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
  public:
	bool check(TreeNode *l, TreeNode *r) {
		if (l == NULL && r == NULL) return true;
		else if (l == NULL || r == NULL) return false;
		else
			return l->val == r->val && check(l->left, r->right) && check(l->right, r->left);
	}
	bool isSymmetric(TreeNode* root) {
		return check(root->left, root->right);
	}
};
int main() {
	return 0;
}