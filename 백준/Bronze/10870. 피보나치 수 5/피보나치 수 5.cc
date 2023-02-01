#include <iostream>

using namespace std;
int pibo(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return pibo(n - 1) + pibo(n - 2);
}
int main() {
	int n;
	cin >> n;
	int ans;
	ans = pibo(n);
	cout << ans;
}
