/*
* @Author: 100yang
* @Date:   2019-10-27
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-27
*/
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
	int romanToInt(string s) {
		int n = s.length();
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'I') {
				if (s[i + 1] == 'V') sum += 4, i++;
				else if (s[i + 1] == 'X') sum += 9, i++;
				else sum++;
			}
			else if (s[i] == 'X') {
				if (s[i + 1] == 'L') sum += 40, i++;
				else if (s[i + 1] == 'C') sum += 90, i++;
				else sum += 10;
			}
			else if (s[i] == 'C') {
				if (s[i + 1] == 'D') sum += 400, i++;
				else if (s[i + 1] == 'M') sum += 900, i++;
				else sum += 100;
			}
			else if (s[i] == 'V') sum += 5;
			else if (s[i] == 'L') sum += 50;
			else if (s[i] == 'D') sum += 500;
			else if (s[i] == 'M') sum += 1000;;
		}
		return sum;
	}
} mm;
int main() {
	string str;
	while (cin >> str && str != "END")
		cout << mm.romanToInt(str) << endl;

	return 0;
}