#include <iostream>
using namespace std;
long long n, k;
long long find_less(long long mid) {
	long long cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt += min(n, (long long)mid/i);
		if (i > mid)
			break;
	}
	return cnt;

}
void binary() {
	long long min = 1;
	long long max = n * n;
	int tmp = 0;
	while (min <= max) {
		long long mid = (min + max) / 2;
		if (find_less(mid) < k)
			min = mid + 1;
		else {
			tmp = mid;
			max = mid - 1;
		}
	}
	cout << tmp;
}
int main() {
	cin >> n >> k;
	binary();
	return 0;
}