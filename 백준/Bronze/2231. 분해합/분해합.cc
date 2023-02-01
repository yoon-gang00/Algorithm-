#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int x = i;
		int sum = i;
		while (x != 0) {
			sum += x % 10;
			x /= 10;
		}
		if (sum == n) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << 0 << "\n";
}