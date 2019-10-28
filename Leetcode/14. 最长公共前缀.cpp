/*
* @Author: 100yang
* @Date:   2019-10-24 15:53:44
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-27
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	static bool cmp(const string &m, const string &n) {
		return m.length() < n.length();
	}
	string longestCommonPrefix(vector<string>& strs) {
		string ans = "";
		int m = strs.size();
		sort(strs.begin(), strs.end(), cmp);
		int n = strs[0].length();
		int i;
		for (i = 0; i < n; ++i) {
			for (int j = 1; j < m; ++j) {
				if (strs[0][i] != strs[j][i]) break;
			}
		}
		// cout << "i == " << i << endl;
		return strs[0].substr(0, i);
	}
} mm;
int main() {
	int n;
	string str;
	std::vector<string> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {cin >> str; v.push_back(str);}
	cout << mm.longestCommonPrefix(v) << endl;
	return 0;
}