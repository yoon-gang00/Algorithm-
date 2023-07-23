#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int sum[501], K[501];
int dp[501][501];
int t, k;
int DP(int start, int end) {
	if (start == end) return 0;
	int& ret = dp[start][end];
	if (ret == -1) {
		for (int k = start; k <= end; k++) {
			int tmp = DP(start, k) + DP(k + 1, end)+sum[end]-sum[start-1];
			if (ret == -1 || ret > tmp)
				ret = tmp;

		}
	}
	return ret;
}
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		memset(dp, -1, sizeof(dp));
		for (int j = 1; j <= k; j++) {
			cin >> K[j];
			sum[j] = sum[j - 1] + K[j];
		}
		cout << DP(1, k) << '\n';
	}
	return 0;
}