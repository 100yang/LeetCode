/*
* @Author: 100yang
* @Date:   2020-07-29
* @Last Modified by:   100yang
* @Last Modified time: 2020-07-29
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
	string convert(string s, int numRows) {
		int len = s.length();
		if (numRows == 1) return s;
		vector<string> ans(min(numRows, int(s.size())));
		int cur = 0;
		bool flg = false;
		for (char c : s) {
			ans[cur] += c;
			if (!cur || cur == numRows - 1 ) flg = !flg;
			cur += flg ? 1 : -1;
		}
		string str;
		for (string row : ans) str += row;
		return str;
	}
} mm;
int main() {
	string str;
	int num;
	cin >> str >> num;
	cout << mm.convert(str, num);
}