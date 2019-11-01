/*
* @Author: 100yang
* @Date:   2019-10-30
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-30
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int countSubstrings(string s) {
		int n = (int)s.length();
		int dp[n + 1][n + 1];
		memset(dp, 0, sizeof(dp));
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			dp[i][i] = 1;
			ans++;
			for (int j = i - 1; j >= 0; --j) {
				if (s[i] == s[j]) {
					if (i - 1 == j || dp[i - 1][j + 1]) {
						dp[i][j] = 1;
						ans++;
					}
				}
			}
		}
		return ans;
	}
} mm;
int main() {
	string str;
	cin >> str;
	cout << mm.countSubstrings(str);
	return 0;
}