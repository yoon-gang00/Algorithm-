#include <iostream>
using namespace std;
int selfNumber(int n) {
	int sum;
	sum = n;
	while (n != 0) {
		sum = sum + (n % 10);
		n = n / 10;
	}
	return sum;
}
int main() {
	int self[10001] = { false, };
	for (int i = 1; i < 10001; i++) {
		int a=selfNumber(i);
		if (a < 10001) {
			self[a] = true;
		}
	}
	for (int i = 1; i < 10001; i++) {
		if (!self[i]) {
			cout << i << "\n";
		}
	}
	return 0;
}