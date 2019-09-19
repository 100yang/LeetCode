#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a1, a2, k1, k2, n;
int getmax(int m) {
	int ans = 0;
	int j = m / k1;
	if (j > a1)
		j = a1;
	ans += j;
	m -= j * k1;
	if (m <= 0)
		return ans;
	j = m / k2;
	if (j > a2) j = a2;
	ans += j;
	return ans;
}
int getmin(int m) {
	int ans = 0;
	if (a1 * (k1 - 1) + a2 * (k2 - 1) >= m)
		return ans;
	m = m - a1 * (k1 - 1) - a2 * (k2 - 1);
	return (m > a1 + a2) ? a1 + a2 : m;
}
int main()
{
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	if (k1 > k2) {
		swap(a1, a2);
		swap(k1, k2);
	}
	int ans1 = getmin(n);
	int ans2 = getmax(n);
	printf("%d %d\n", ans1, ans2);
	return 0;
}