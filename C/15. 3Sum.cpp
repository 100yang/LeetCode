/*
* @Author: 100yang
* @Date:   2019-10-28
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-28
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		std::vector<std::vector<int> > v;
		int n = nums.size();
		if (n < 3) return v;
		sort(nums.begin(), nums.end());
		int head = 0;
		int tail = n - 1;
		for (int i = 0; i < n; ++i) {
			if (nums[i] > 0) break;
			if (i  && nums[i] == nums[i - 1]) continue;
			int L = i + 1;
			int R = n - 1;
			while (L < R) {
				int sum = nums[i] + nums[L] + nums[R];
				if (!sum) {
					v.push_back({nums[i], nums[L], nums[R]});
					while (L < R && nums[L] == nums[L + 1])L++;
					while (L < R && nums[R] == nums[R - 1])R--;
					L++;
					R--;
				}
				else if (sum < 0) L++;
				else R--;
			}
		}
		return v;
	}
} mm;
int main() {
	int n, a;
	cin >> n;
	std::vector<int> v;
	while (n--) {
		cin >> a;
		v.push_back(a);
	}
	auto ans = mm.threeSum(v);
	for (int i = 0; i < (int)ans.size(); ++i) {
		cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
	}
	return 0;
}