#include <iostream>
#include <algorithm>
using namespace std;
int dp[500][500] = { 0, };
int main() {
	int n;
	cin >> n;
	int ans= 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][0] + dp[i][j];
			else if (i == j)
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else
				dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);
			ans = max(ans, dp[i][j]);

		}
	}
	cout << ans;
}