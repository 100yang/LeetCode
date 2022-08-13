/*
* @Author: 100yang
* @Date:   2020-05-21
* @Last Modified by:   100yang
* @Last Modified time: 2020-05-21
*/
#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
class Solution {
  public:
	int num[11001 * 2];
	void manacher(string s) {
		char stmp[11001 * 2];
		int len = 0;
		int slen = s.size();
		stmp[len++] = '$';
		stmp[len++] = '#';
		for (int i = 0; i < slen; ++i) {
			stmp[len++] = s[i];
			stmp[len++] = '#';
		}
		stmp[len] = '\0';
		// printf("%s\n", stmp);
		int mx, id;
		mx = id = 0;
		for (int i = 0; i < len; ++i) {
			num[i] = (mx > i) ? min(num[2 * id - 1], mx - i) : 1;
			while ((i - num[i] >= 0) && (i + num[i] < len)
			        && (stmp[i + num[i]] == stmp[i - num[i]]) )
				num[i]++;
			if (i + num[i] > mx) {
				mx = i + num[i];
				id = i;
			}
		}
		// printf("!!!!!!!!\n" );
	}
	string longestPalindrome(string s) {
		if (!s.size()) return "";
		// puts("ss");
		manacher(s);
		// puts("ss");
		int slen = s.size();
		slen = 2 * (slen + 1);
		int cnt  = 0;
		int id = 0;
		for (int i = 0; i < slen; ++i) {
			if (num[i] - 1 > cnt) {
				cnt = num[i] - 1;
				id = i;
			}
		}
		int st = id - cnt + 1;
		return s.substr(st / 2 - 1, cnt);
	}
};
int main() {
	string s;
	cin >> s;
	// cout << "" << endl;
	// cout << s << endl;
	// cout << "" << endl;
	// cout << s.size() << endl;
	// cout << s.substr(7, 10);
	Solution ans;
	string str = ans.longestPalindrome(s);
	// puts("ssss");
	cout << str << endl;
	return 0;
}
/*
abcdefgabbbak
abba
abbba

 */