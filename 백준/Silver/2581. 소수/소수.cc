#include <iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int min;
	for (int i = n; i >= m; i--) {
		int cnt = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 1) {
			min = i;
			sum += i;
		}
	}
	if (sum == 0) {
		cout << "-1";
	}
	else {
		cout << sum << "\n" << min;
	}
}