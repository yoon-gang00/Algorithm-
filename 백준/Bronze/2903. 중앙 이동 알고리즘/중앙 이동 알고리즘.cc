#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a = 2;
	for (int i = 0; i < n; i++) {
		a = 2 * a - 1;
	}
	cout << a * a;
}