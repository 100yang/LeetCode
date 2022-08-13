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
	int myAtoi(string str) {
		set<char> st;
		char c1 = 'a';
		char c2 = 'A';
		for (int i = 0; i < 26; ++i) {
			st.insert(c1 + i);
			st.insert(c2 + i);
		}
		int len = str.length();
		if (str.length() == 0) return 0;
		bool flg = true;
		int f = 1;//符号位
		long long ans = 0;
		int i;
		for (i = 0; i < len; ++i) {
			if (str[i] != ' ') { //第一个不为空的字符
				if (st.count(str[i])) return 0;// 字母
				if (str[i] == '-') {
					f = -1; i++;
				}
				if (str[i] == '+') i++;
				break;
			}
		}
		// 保证符号位的后一位不是重复的符号
		while (str[i] == '-') i++;
		while (str[i] == '+') i++;
		if (st.count(str[i])) return 0;// 符号位的后一位是字母
		for (int j = i; j < len; ++j) {

		}

	}
} mm;
int main() {
	return 0;
}