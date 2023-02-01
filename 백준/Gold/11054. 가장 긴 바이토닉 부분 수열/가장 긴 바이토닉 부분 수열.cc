#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[2][1001];
int n;
int main() {
	cin >> n;
	fill(dp[0], dp[0] + 1001, 1);
	fill(dp[1], dp[1] + 1001, 1);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i]) {
				dp[0][i] = max(dp[0][i], dp[0][j] + 1);
			}
		}
	}
	for (int i = n; i >= 1; i--) {
		for (int j = n; j > i; j--) {
			if (arr[j] < arr[i]) {
				dp[1][i] = max(dp[1][i], dp[1][j] + 1);
			}
		}
	}
	int ans = 0;
	for (int k = 1; k <= n; k++) {
		ans = max(ans, dp[0][k] + dp[1][k]);
	}
	cout << ans - 1;
	return 0;
}
