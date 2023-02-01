#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int L, G;
	int x, y,z;
	x = a;
	z = b;
	y = b;
	while (1) {
		if (a % b == 0)
		{
			G = b;
			break;
		}
		else {
			b = a % b;
			a = y;
			y = b;
		}

	}
	L = (x * z) / G;
	cout << G << "\n" << L;
}