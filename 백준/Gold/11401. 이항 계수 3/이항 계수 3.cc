#include <iostream>
#define DIV 1000000007
using namespace std;
long long temp;
long long divi(long long a ,long long b) {
	if (b == 0) return 1;
	temp = divi(a, b / 2) % DIV;
	if (b % 2 == 1)return temp * temp % DIV * a % DIV;

	return temp * temp % DIV;
}
void solve(int n, int k) {
	if (k == 1) {
		cout << n;
		return;
	}
	if (k == 0 || n == k) {
		cout << 1;
		return;
	}
	if (n - k == 1) {
		cout << n;
		return;
	}
	long long x = 1, y = 1, ans;
	for (int i = n; i >= n - k + 1; i--)
		x = (x * i) % DIV;
	for (int i = 1; i <= k; i++)
		y = (y * i) % DIV;
	ans = ((x % DIV) * divi(y, DIV - 2) % DIV) % DIV;
	cout << ans;
}
int main() {
	int n, k;
	cin >> n >> k;
	solve(n, k);
	return 0;
}