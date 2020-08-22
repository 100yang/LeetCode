/*
* @Author: 100yang
* @Date:   2020-05-22
* @Last Modified by:   100yang
* @Last Modified time: 2020-05-22
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
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
  public:
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		if (preorder.size() == 0 || inorder.size() == 0) return NULL;
		TreeNode* ans = new TreeNode(preorder[0]);
		// ans->val = preorder[0];
		int len = preorder.size();
		vector<int> pre, in;
		int pos = 0;//根节点的位置
		for (int i = 0; i < len; ++i) {
			if (preorder[0] == inorder[i]) {
				pos = i;
				break;
			}
		}
		// printf("pos == %d\n", pos );
		pre.clear();
		in.clear();
		//left
		for (int i = 1; i <= pos; ++i)
			pre.push_back(preorder[i]);
		for (int i = 0; i < pos; ++i)
			in.push_back(inorder[i]);
		ans->left = buildTree(pre, in);

		pre.clear();
		in.clear();
		//right
		for (int i = pos + 1; i < len; ++i) {
			pre.push_back(preorder[i]);
			in.push_back(inorder[i]);
		}
		ans->right = buildTree(pre, in);
		return ans;
	}
};
void P(TreeNode *tmp) {
	if (tmp != NULL ) {
		printf("%d ", tmp->val);
		P(tmp->left);
		P(tmp->right);
	}
}
int main() {
	int n;
	cin >> n;
	int a;
	std::vector<int> v1, v2;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v2.push_back(a);
	}
	Solution ans;
	TreeNode *tmp = ans.buildTree(v1, v2);
	// printf("%d\n", tmp->val );
	// printf("%d\n", tmp->left->val);
	P(tmp);
}

/*
5
3 9 20 15 7
9 3 15 20 7
*/