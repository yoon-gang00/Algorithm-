#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int a[6];
	int b[6];
	int cnt[5] = { 0,0,0,0,0};
	int small=1, big = 1;
	for (int i = 0; i < 6; i++) {
		cin >> a[i] >> b[i];
		cnt[a[i]]++;
	}
	for (int i = 0; i < 6; i++) {
		if (cnt[a[i]] == 1) {
			big *= b[i];
			continue;
		}
		int n = (i + 1) % 6;
		int nn = (i + 2) % 6;
		if (a[i] == a[nn]) small *= b[n];
	}
	cout << (big - small) * x;

}