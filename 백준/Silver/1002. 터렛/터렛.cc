#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	int x1, y1, r1, x2, y2, r2;
	int d;
	int R1, R2;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		R1 = (r1 - r2) * (r1 - r2);
		R2 = (r1 + r2) * (r1 + r2);
		if (d == 0) {
			if (R1 == 0)
				cout << "-1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (d == R1 || d == R2)
			cout << "1" << '\n';
		else if (R1 < d && d < R2)
			cout << "2" << '\n';
		else
			cout << "0" << '\n';
	}
}