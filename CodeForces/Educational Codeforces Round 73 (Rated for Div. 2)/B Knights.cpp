#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
typedef long long ll;
#define fi first
#define se second
int a[maxn][maxn];
int dir[8][2] = { -2, -1, -1, -2, 1, -2, -2, 1, 2, -1, -1, 2, 2, 1, 1, 2};
int n;
void dfs(int x, int y)
{
	int sx, sy;
	for (int i = 0; i < 8; i++) {
		sx = x + dir[i][0];
		sy = y + dir[i][1];
		if (sx < 0 || sx > (n - 1) || sy < 0 || sy > (n - 1)) continue;
		if (!a[sx][sy]) {
			a[sx][sy] = 1;
			if (a[x][y] == 1)
				a[sx][sy] = 2;
			dfs(sx, sy);
		}
	}
}

int main()
{
	scanf("%d", &n);
	a[0][0] = 1;
	dfs(0, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1)
				printf("W");
			else
				printf("B");
		}
		puts("");
	}
	return 0;
}
