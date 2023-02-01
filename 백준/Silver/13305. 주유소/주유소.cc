#include <iostream>
#include <climits>
using namespace std;
int cost[100001], dist[100001];
long long solve(int n) {
	int min = INT_MAX;
	long long sum = 0;
	for (int i = 1; i < n; i++) {
		if (cost[i] < min) min = cost[i];
		sum += (long long)min * (long long)dist[i];
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) cin >> dist[i];
	for (int i = 1; i <= n; i++)cin >> cost[i];
	cout << solve(n);
	return 0;
}