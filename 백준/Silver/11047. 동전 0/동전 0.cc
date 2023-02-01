#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		cnt = cnt + k / v[i];
		k = k % v[i];
		if (k == 0)break;

	}
	cout << cnt << endl;
}
