using namespace std;
#include <iostream>
int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i=1; i <= n; i++) {
		ans += i;
	}
	cout << ans;
}