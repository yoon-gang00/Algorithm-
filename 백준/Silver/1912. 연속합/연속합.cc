#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int dp[100001];
	int num[100001];
	cin >> n;
	int m = -1001;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	
	for (int i = 1; i <= n; i++) {
		if (dp[i - 1] + num[i] < num[i]) {
			dp[i] = num[i];
		}
		else {
			dp[i] = dp[i - 1] + num[i];
		}
		if (dp[i] >= m) {
			m = dp[i];
		}
	}
	cout << m;
}