#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001];
int n;
int main() {
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}
	fill(dp, dp + 1001, 1);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;
}