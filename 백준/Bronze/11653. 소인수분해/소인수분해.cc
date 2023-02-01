#include <iostream>
using namespace std;
int main() {
	int n;
	int x = 2;
	cin >> n;
	while (1) {
		if (n == 1) {
			break;
		}
		else if (n % x == 0) {
			n /= x;
			cout << x << "\n";
		}
		else
			x++;
	}
}