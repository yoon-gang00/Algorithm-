#include <iostream>
using namespace std;
int find(int n) {
	int cnt;
	if (n < 100)
	{
		return n;
	}
	else {
		cnt = 99;
		for (int i = 100; i <= n; i++) {
			int l = i / 100;
			int m = i / 10 % 10;
			int r = i % 10;
			if (l + r == m * 2) cnt++;
		}
		return cnt;
	}
}
int main() {
	int n;
	cin >> n;
	cout << find(n);
}