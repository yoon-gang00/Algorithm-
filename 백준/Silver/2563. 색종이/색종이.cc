#include <iostream>

using namespace std;
int p[100][100];
int main() {
	int n, x, y, cnt = 0;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		for (int j = y; j < y + 10; j++) {
			for (int t = x; t < x + 10; t++) {
				if (!p[j][t]) {
					cnt++;
					p[j][t] = 1;
				}
			}
		}

	}
	cout << cnt;
}
