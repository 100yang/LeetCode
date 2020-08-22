/*
* @Author: 100yang
* @Date:   2020-05-28
* @Last Modified by:   100yang
* @Last Modified time: 2020-05-28
*/
#include <bits/sdc++.h>
using namespace std;
class Solution {
  public:
	string decodeString(string s) {
		vector<int> q1, q2;
		int len = s.size();
		for (int i = 0; i < len; ++i) {
			if (s[i] == '[') q1.push_back(i);
			if (s[i] == ']') q2.push_back(i);
		}
		int vlen = q1.size();
		string ans = "";
		int pre = -1;
		for (int i = 0; i < vlen; ++i) {
			int pos = lower_bound(q1.begin(), q1.end()) - q1.begin() - 1;
			string tmp = s.substr(pos + 1, q2[i] - pos - 1);
			len = (s[pos - 1] - '0');
			for (int j = 0; j < len; ++j) {
				tmp += 
			}
		}
	}
};
int main() {
	return 0;
}