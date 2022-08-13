/*
* @Author: 100yang
* @Date:   2019-10-24 15:53:44
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-28
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
		int f;
		for (i = 0; i < n; ++i) {
			f = 0;
			for (int j = 1; j < m; ++j) {
				if (strs[0][i] != strs[j][i]) {f = 1; break;}
			}
			if (f) break;
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