#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, k, sum[100001], ret = -1000000;
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		int tmp;
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp;
	}
	for (int i = k; i <= n; ++i) {
		ret = max(ret, sum[i] - sum[i - k]);
	}
	cout << ret << endl;
}
