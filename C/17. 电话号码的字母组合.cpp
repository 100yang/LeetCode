/*
* @Author: 100yang
* @Date:   2019-10-29
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-29
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	map<char, string> mp;
	std::vector<string> ans;
	string v = "";
	//构造成一棵树 三叉树
	void dfs(int num, string digits) {//第几层 数字是几
		if (num == (int)digits.length()) {//到最后一层了
			// cout << v << endl;
			ans.push_back(v);
			// v = "";
			return;
		}
		// if (digits[num] == '0' || digits[num] == '1') num++;
		for (int i = 0; i < (int)mp[digits[num]].size(); ++i) {
			// cout << mp[digits[num]] << endl;
			v += mp[digits[num]][i];
			dfs(num + 1, digits);
			v = v.substr(0, num);
		}
	}
	vector<string> letterCombinations(string digits) {
		mp['1'] = ""; mp['0'] = "";
		mp['2'] = "abc"; mp['5'] = "jkl";
		mp['3'] = "def"; mp['6'] = "mno";
		mp['4'] = "ghi"; mp['7'] = "pqrs";
		mp['8'] = "tuv"; mp['9'] = "wxyz";
		if (digits != "")
			dfs(0, digits);
		return ans;
	}
} mm ;
int main() {
	string str;
	cin >> str;
	auto ans = mm.letterCombinations(str);
	cout << ans.size() << endl;
	for (int i = 0; i < (int)ans.size(); ++i) {
		cout << ans[i] << endl;
	}
	return 0;
}