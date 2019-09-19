#include <bits/stdc++.h>
using namespace std;
/*
贪心 也许我当时读错题了??
 */
int main()
{
	int T;
	cin >> T;
	while (T--) {
		int n, x;
		cin >> n >> x;
		int d, h;
		int maxd, maxh;
		maxh = maxd = 0;
		while (n--) {
			cin >> d >> h;
			maxh = max(maxh, d - h);
			maxd = max(maxd, d);
		}
		int ans = 0;
		if (maxd >= x) ans = 1;
		else if (maxh <= 0) ans = -1;
		else ans = (x - maxd + maxh - 1) / maxh + 1;
		printf("%d\n", ans);
	}
	return 0;
}
/*
1
2 10
8 10
11 14
 */