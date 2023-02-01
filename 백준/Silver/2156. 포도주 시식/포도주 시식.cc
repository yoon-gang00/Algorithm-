#include <iostream>
#include <algorithm>
using namespace std;
int drink[10001];
int dp[100001];
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> drink[i];
	}
	dp[0] = drink[0];
	dp[1] = drink[0] + drink[1];
	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], max(dp[i - 3] + drink[i - 1] + drink[i], dp[i - 2] + drink[i]));
	}
	cout << dp[n-1];
}
