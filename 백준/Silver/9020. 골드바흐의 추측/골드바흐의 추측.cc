#include <iostream>
#include <cmath>
using namespace std;

bool primeCheck(int i) {
	int t;
	t = sqrt(i);
	if (t == 1 && i != 1) {
		return true;
	}
	if (i % 2) {
		for (int j = 2; j <= t; j++) {
			if (!(i % j)) //나누어 떨어지면
				return false;
			if (j == t) {
				return true;
			}
		}
	}
}
int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int n;
		cin >> n;
		for (int j = n / 2; j >= 2; j--) {
			if (primeCheck(j) && primeCheck(n - j)) {
				cout << j << " " << n - j << "\n";
				break;
			}
		}
	}
}
