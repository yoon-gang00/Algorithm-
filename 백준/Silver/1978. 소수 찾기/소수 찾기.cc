#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= v[i]; j++) {
			if (v[i] % j == 0)
				cnt++;
		}
		if (cnt ==2)
			ans++;
		cnt = 0;
	}
	cout << ans;
}