#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
typedef long long ll;
#define fi first
#define se second
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int c, m, x;
		scanf("%d%d%d", &c, &m, &x);
		int ans = min(c, m);
		int sum = c + m + x;
		sum /= 3;
		ans = min(sum, ans);
		printf("%d\n", ans);
	}
	return 0;
}