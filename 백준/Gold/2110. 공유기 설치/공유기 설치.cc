#include <iostream>
#include <algorithm>
using namespace std;
int home[200001];
int binary(int n, int c) {
	int right = home[n - 1];
	int left = 1;
	int ans = 0;
	while (left <= right) {
		int mid = (right + left) / 2;
		int x = home[0];
		int cnt = 1;
		for (int i = 1; i < n; i++) {
			if (home[i] - x >= mid) {
				x = home[i];
				cnt++;
			}

		}
		if (cnt >= c)
		{
			ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
		
	}
	return ans;
}
int main() {
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> home[i];
	}
	sort(home, home + n);
	cout << binary(n, c);
}