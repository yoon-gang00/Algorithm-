#include <iostream>
using namespace std;
#define MOD 1000000000
int n;
int dp[9][101];
int ans = 0;
int main() {
	

	cin >> n;
	for (int i = 1; i <= 9; i++)
		dp[i][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				dp[j][i] = dp[1][i - 1];
			else if (j == 9)
				dp[j][i] = dp[8][i - 1];
			else {
				dp[j][i] += dp[j - 1][i - 1];
				dp[j][i] += dp[j + 1][i - 1];
			}
			dp[j][i] %= MOD;
		}
	}
	for (int i = 0; i <= 9; i++) {
		ans += dp[i][n];
		ans %= MOD;
	}
	cout << ans;
	return 0;
}
