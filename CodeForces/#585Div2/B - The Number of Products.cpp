#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
	如果当前为正 则++
	否则将负值更新 ++
 */
int main()
{
	int n;
	cin >> n;
	int mp;
	ll ans1, ans2, num1, num2;
	ans2 = ans1 = 0;
	num1 = num2 = 0;
	while (n--) {
		cin >> mp;
		if (mp > 0) num1 ++;
		else {
			ll t = num2;
			num2 = num1;
			num1 = t;
			num2 ++;
		}
		ans1 += num1;
		ans2 += num2;
		// printf("%lld %lld\n", ans1,ans2);
	}
	cout << ans2 << " " << ans1 << endl;
	return 0;
}