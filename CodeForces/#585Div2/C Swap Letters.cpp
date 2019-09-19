#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
std::vector<int> v1, v2;
inline void cout_ans(vector<int > v) {
	int num1 = v.size();
	for (int i = 0; i + 1 < num1; i += 2) {
		printf("%d %d\n", v[i], v[i + 1]);
	}
}
int main()
{
	int n;
	cin >> n;
	v1.clear();
	v2.clear();
	string str1, str2;
	cin >> str1;
	cin >> str2;
	for (int i = 0; i < n; ++i) {
		if (str1[i] == str2[i]) continue;
		if (str1[i] == 'a') v1.push_back(i + 1);
		else v2.push_back(i + 1);
	}
	int num1 = v1.size(); int num2 = v2.size();
	if (num1 + num2 & 1) {puts("-1"); return 0;}
	int cnt = num1 / 2 + num2 / 2;
	if ((num1 & 1) && (num2 & 1)) cnt += 2;
	printf("%d\n", cnt);
	cout_ans(v1);
	cout_ans(v2);
	if ((num1 & 1) && (num2 & 1)) {
		printf("%d %d\n", v1[num1 - 1], v1[num1 - 1]);
		printf("%d %d\n", v1[num1 - 1], v2[num2 - 1]);
	}
	return 0;
}
/**
 * 贪心
 * aa
 * bb
 * 这种交换是最佳的
 * ab
 * ba
 * 这种需要交换+2
 */