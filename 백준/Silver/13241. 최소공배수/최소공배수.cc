#include <iostream>
using namespace std;
long long Gcd(long long x, long long y) {
	if (x % y == 0)
		return y;
	return Gcd(y, x % y);
}
long long ans(long long x, long long y) {
	return x * y / Gcd(x, y);
}
int main() {
	long long x, y;
	cin >> x >> y;
	cout << ans(x, y);
	return 0;
}