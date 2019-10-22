#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x)) return false;
		int rel = 0;
		while (x > rel) {
			rel = rel * 10 + x % 10;
			x /= 10;
		}
		return x == rel || x == rel / 10;
		// if(x < 0) return false;
		// std::vector<int> v;
		// while (x) {v.push_back(x % 10); x /= 10;};
		// int len = v.size();
		// int i = 0;
		// int j = len - 1;
		// while (i < j) {
		// 	if (v[i] != v[j]) return false;
		// 	i++;
		// 	j--;
		// }
		// return true;
	}
} tt;
int main()
{
	int n;
	cin >> n;
	cout << tt.isPalindrome(n) << endl;
	return 0;
}