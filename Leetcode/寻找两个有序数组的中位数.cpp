#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int len1 = nums1.size();
		int len2 = nums2.size();
		if (len1 > len2) return findMedianSortedArrays(nums2, nums1);
		int lmax1, lmax2, rmin1, rmin2;
		int l, r;
		l = 0; r = 2 * len1;
		int mid1, mid2;
		while (l <= r) {
			mid1 = (l + r) >> 1;
			mid2 = (len1 + len2 - mid1);
			lmax1 = (mid1 == 0) ? INT_MIN : nums1[(mid1 - 1) / 2];
			rmin1 = (mid1 == 2 * len1) ? INT_MAX : nums1[mid1 / 2];
			lmax2 = (mid2 == 0) ? INT_MIN : nums2[(mid2 - 1) / 2];
			rmin2 = (mid2 == 2 * len2) ? INT_MAX : nums2[mid2 / 2];
			if (lmax1 > rmin2) r = mid1 - 1;
			else if (lmax2 > rmin1) l = mid1 + 1;
			else break;
		}
		return (max(lmax1, lmax2) + min(rmin1, rmin2)) / 2.0;
	}
} mm;
int main() {
	std::vector<int> v2 = {1, 3};
	std::vector<int> v1 = {4, 5};
	cout << mm.findMedianSortedArrays(v1, v2) << endl;
	return 0;
}
