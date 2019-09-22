#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 10;
typedef long long ll;
#define fi first
#define se second
std::map<int, int> mp;
int base[11] = {1, 2, 4, 8, 16,
                32, 64, 128, 256, 512,
                1024
               };
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		mp.clear();
		scanf("%d", &n);
		int a;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a);
			if (a > 2048) continue;
			mp[a]++;
		}
		for (int i = 0; i < 11; ++i) {
			while (mp[base[i]] >= 2) {
				// printf("%d %d\n", base[i], mp[base[i]]);
				mp[base[i] * 2]++;
				mp[base[i]] -= 2;
			}
		}
		if (mp[2048])puts("YES");
		else puts("NO");
	}
	return 0;
}