/*
* @Author: 100yang
* @Date:   2020-08-10
* @Last Modified by:   100yang
* @Last Modified time: 2020-08-10
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
	int countBinarySubstrings(string s) {
		vector<int> v;
		int index = 0, n = s.length();
		int ans = 0, tmp = 0 ;
		while (index < n) {
			char ch = s[index];
			int cnt = 0;
			while (index < n && s[index] == ch) {
				index++;
				cnt++;
			}
			ans += min(tmp, cnt);
			tmp = cnt;
		}
		return ans;
	}
} mm;
int main() {
	string str;
	cin >> str;
	cout << mm.countBinarySubstrings(str);
	return 0;
}