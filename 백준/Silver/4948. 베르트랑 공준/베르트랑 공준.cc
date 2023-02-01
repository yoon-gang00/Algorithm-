#include <iostream>
using namespace std;
int arr[123456 * 2 + 1]{ 0, };
int main() {
	int max = 123456 * 2;
	for (int i = 2; i <= max; i++) {
		arr[i] = i;
	}
	for (int i = 2; i * i <= max; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = i * i; j <= max; j += i) {
			arr[j] = 0;
		}
	}
	while (1) {
		int n;
		cin >> n;
		if (n == 0)
			break;
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (arr[i] != 0) {
				++cnt;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}