#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
/**
 * @date 2019.09.22
 */
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int ans = 0;
		std::map<char, int	> mp;
		mp.clear();
		int len = s.length();
		int st = 0;
		for (int i = 0; i < len; ++i) {
			if (mp[s[i]]) {
				st = max(mp[s[i]], st);
			}
			ans = max(ans, i - st + 1);
			mp[s[i]] = i + 1;
		}
		return ans;
	}
} mm;
int main() {
	string str;
	cin >> str;
	cout << mm.lengthOfLongestSubstring(str) << endl;
}