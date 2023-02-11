#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long n, m;
int MAX = 0;
long long sum=0;
int ans;
vector <int> v;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		if (x >= MAX) {
			MAX = x;
		}
	}
	int left = 0;
	int right = MAX;
	
	while (left <= right) {
		sum = 0;
		int mid = (left + right) / 2;
		for (int j = 0; j < n; j++) {
			if (mid < v[j])
				sum += v[j] - mid;
		}
		if (sum >= m) {
			if (ans < mid) {
				ans = mid;
			}
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans;
}