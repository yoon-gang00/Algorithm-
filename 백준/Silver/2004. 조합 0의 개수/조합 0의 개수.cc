#include <iostream>
#include <vector>
using namespace std;
pair<long long, long long> two_five_count(long long x) {
	long long two = 0;
	long long five = 0;
	for (long long i = 2; i <= x; i *= 2) {
		two += x / i;
	}
	for (long long i = 5; i <= x; i *= 5) {
		five += x / i;
	}
	return make_pair(two, five);
}
int main() {
	int n, m;
	cin >> n >> m;
	pair<long long, long long> N = two_five_count(n);
	pair<long long, long long> nm = two_five_count(n-m);
	pair<long long, long long> M = two_five_count(m);

	long long a = N.first - (nm.first + M.first);
	long long b = N.second - (nm.second + M.second);
	long long ans;
	if (a >= b)
		ans = b;
	else
		ans = a;
	cout << ans;
	return 0;
}