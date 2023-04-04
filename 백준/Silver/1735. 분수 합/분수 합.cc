#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
	int n=1;
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int main() {
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	int x, y;
	x = a1 * b2 + a2 * b1;
	y = a2 * b2;
	int m;
	m = gcd(x, y);
	x /= m ;
	y /= m ;
	cout << x << " " <<y;
}