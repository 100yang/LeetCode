/*
* @Author: 100yang
* @Date:   2019-10-23 21:01:24
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-23 21:18:54
*/
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:

	string intToRoman(int num) {
		string ans = "";
		char c;
		while (num) {
			if (num >= 1000) ans +='M', num -= 1000;
			else if (num >= 500) {
				if (num >= 900) ans += "CM", num -= 900;
				else {
					ans +='D';
					num -= 500;
				}
			}
			else if (num >= 100) {
				if (num >= 400)
					ans += "CD", num -= 400;
				else
					ans +='C', num -= 100;
			}
			else if (num >= 50) {
				if (num >= 90) ans += "XC", num -= 90;
				else ans +='L', num -= 50;
			}
			else if (num >= 10) {
				if (num >= 40) ans += "XL", num -= 40;
				else  ans +='X', num -= 10;
			}
			else if (num >= 5) {
				if (num >= 9) ans += "IX", num -= 9;
				else  ans +='V', num -= 5;
			}
			else {
				if (num >= 4) ans += "IV", num -= 4;
				else ans +='I', num -= 1;
			}
		}
		return ans;
	}
} mm;

int main() {
	int n, num;
	cin >> n;
	while (n--) {
		cin >> num;
		cout << mm.intToRoman(num);
	} return 0;
}