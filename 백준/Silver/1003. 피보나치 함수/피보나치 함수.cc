#include <iostream>
using namespace std;
long long arr[50] = { 0,1 };
long long fibo(int n) {
	if (n == 0 || n == 1) {
		return arr[n];
	}
	else if (arr[n] == 0) {
		arr[n] = fibo(n - 1) + fibo(n - 2);
	}
	return arr[n];
}
int main() {
	int t;
	cin >> t;
	int x;
	for (int i = 0; i < t; i++) {
		cin >> x;
		if (x == 0) {
			cout << "1 0" << '\n';
		}
		else {
			cout << fibo(x - 1) << ' ' << fibo(x) << "\n";
		}

	}
}