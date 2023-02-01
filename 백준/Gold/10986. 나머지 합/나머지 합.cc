#include <iostream>
using namespace std;
long long sum[1000000];
long long cnt[1001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int num, m, val;
	long long result = 0;
	cin >> num >> m;
	for (int i = 0; i < num; i++) {
		cin >> val;
		val %= m;
		if (i == 0)
			sum[i] = val;
		else sum[i] = (sum[i - 1] + val) % m;
		if (sum[i] == 0) result++;
		cnt[sum[i]]++;
	}
	for (int i = 0; i <= m; i++)
		result += (cnt[i] * (cnt[i] - 1)) / 2;
	cout << result;
	return 0;
}