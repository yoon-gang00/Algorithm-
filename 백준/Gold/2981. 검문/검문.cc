#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int GCD(int x, int y) {
	if (x % y == 0)
		return y;
	return GCD(y, x % y);
}
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int gcd = v[1] - v[0];
	for (int i = 2; i < n; i++) {
		gcd = GCD(gcd, v[i] - v[i - 1]);
	}
	vector<int> result;
	for (int i = 2; i * i <= gcd; i++) {
		if (gcd % i == 0) {
			result.push_back(i);
			result.push_back(gcd / i);
		}
	}
	result.push_back(gcd);
	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end());
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << "\n";
	return 0;
}