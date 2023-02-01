#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int>arr[100001];
int main() {
	int n, a, b, cnt = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> a;
		arr[i] = { a,b };
	}
	sort(arr, arr + n);
	int end = arr[0].first;
	for (int i = 1; i < n; i++) {
		if (end <= arr[i].second) {
			cnt++;
			end = arr[i].first;
		}
	}
	cout << cnt;
}
