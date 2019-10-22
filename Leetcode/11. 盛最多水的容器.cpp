/*
* @Author: 100yang
* @Date:   2019-10-22 20:30:56
* @Last Modified by:   100yang
* @Last Modified time: 2019-10-22 20:39:38
*/
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int head = 0;
		int tail = (int) height.size() - 1;
		int ans = (tail - head) * (min(height[head], height[tail]));
		while (head != tail) {
			if (height[head] < height[tail]) head++;
			else tail--;
			ans  = max(ans, (tail - head) * (min(height[head], height[tail])));
		}
		return ans;
	}
} mm;

int main() {
	int n, a;
	cin >> n;
	std::vector<int> v;
	for (int i = 0; i < n; ++i) {cin >> a; v.push_back(a);}
	cout << mm.maxArea(v);
	return 0;
}
