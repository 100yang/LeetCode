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
	int reverse(int x) {
		long long  kk = 2147483647;
		int cnt = 0;
		int f = 1;
		long long j = x;
		if (j < 0) {
			j = -j;
			f = -1;
		}
		long long k = j;
		while (j) {
			cnt++;
			j /= 10;
		}
		long long  ans = 0;
		while (k) {
			ans = ans * 10 + k % 10;
			if (ans > kk) {ans = 0; break;}
			k /= 10;
		}
		return f * ans;
	}
} mm;
int main() {
	int n;
	cin >> n;
	cout << mm.reverse(n);
	return 0;
}

/*
 2147483648
*/