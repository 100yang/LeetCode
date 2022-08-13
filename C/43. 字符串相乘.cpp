/*
* @Author: 100yang
* @Date:   2019-10-22 20:44:21
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-22 21:11:24
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int get(char c) {
		int ans = 0;
		switch (c) {
		case '1': ans = 1; break;
		case '2': ans = 2; break;
		case '3': ans = 3; break;
		case '4': ans = 4; break;
		case '5': ans = 5; break;
		case '6': ans = 6; break;
		case '7': ans = 7; break;
		case '8': ans = 8; break;
		case '9': ans = 9; break;
		}
		return ans;
	}
	string multiply(string num1, string num2) {
		string ans = "";
		int len = max((int)num1.length(), (int)num2.length());
		for (int i = num1.length(); i < len; ++i) {
			num1[i] = '1';
		}
		for (int i = num2.length(); i < len; ++i) {
			num2[i] = '1';
		}
		int mul = 0;
		int mod = 0;
		int a, b;
		a = b = 0;
		std::vector<int> v;
		v.clear();
		int sum = 0;
		
		return ans;
	}

} mm;
string str1, str2;
int main() {
	cin >> str1 >> str2;
	cout << mm.multiply(str1, str2);
	return 0;
}