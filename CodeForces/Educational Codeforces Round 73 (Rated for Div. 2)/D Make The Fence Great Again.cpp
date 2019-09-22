#include<bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 10;
typedef long long ll;
const ll inf = 2e18 + 10;
ll a[maxn], b[maxn];
ll dp[maxn][3];
/*
一个块最多变化两次 即+2
 */
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i <= n; ++i)
			for (int j = 0; j < 3; ++j)
				dp[i][j] = inf;
		for (int i = 1; i <= n; ++i)scanf("%lld%lld", &a[i], &b[i]);
		dp[0][0] = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					if (a[i] + j != a[i - 1] + k) {
						dp[i][j] = min(dp[i][j], dp[i - 1][k] + j * b[i]);
					}
				}
			}
		}
		ll ans = min(dp[n][0], min(dp[n][1], dp[n][2]));
		printf("%lld\n", ans );
	}
	return 0;
}
/*
4
1 2 2 120
1 2 2 60
1 2 2 30
1 2 2 15
 */