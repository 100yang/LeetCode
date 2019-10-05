#include <bits/stdc++.h>
using namespace std;
/**
 * @date 2019.9.23
 */
class Solution {
public:
	vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
		std::vector<int> ans;
		ans.clear();
		// std::vector<int> vi;
		int cnt = 0;
		int n = A.size();
		int vi[n + 1];
		for (int i = 0; i < n; ++i) {
			int j = 0;
			if ((A[i] & 1) == 0) {
				j = 1;
				cnt += A[i];
			}
			vi[i] = j;
		}
		int q = queries.size();
		for (int p = 0; p < q; ++p) {
			int val = queries[p][0];
			int id = queries[p][1];
			int now = val + A[id];
			if (now & 1) {
				if (vi[id]) cnt -= A[id];
				vi[id] = 0;
			}
			else {
				if (!vi[id]) cnt += now;
				else cnt += val;
				vi[id] = 1;
			}
			// printf("cnt == %d val == %d %d\n",cnt,val,id );
			A[id] = now;
			ans.push_back(cnt);
		}
		return ans;
	}
} mm;
int main() {
	std::vector<int> a = {1, 2, 3, 4};
	std::vector< vector<int> > q = {{1, 0}, { -3, 1}, { -4, 0}, {2, 3}};
	std::vector<int> v = mm.sumEvenAfterQueries(a, q);
	int n = v.size();
	for (int i = 0; i < n; ++i) printf("%d ", v[i]);
	return 0;
}