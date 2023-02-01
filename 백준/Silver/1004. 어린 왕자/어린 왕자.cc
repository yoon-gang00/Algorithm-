#include <iostream>
#include <cmath>

using namespace std;
double planet[51][4];
double d(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main() {
	int t, n, blank;
	double x1, y1, x2, y2, cx, cy, r;
	cin >> t;
	while (t--) {
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		blank = 0;
		for (int i = 1; i <= n; i++) {
			cin >> cx >> cy >> r;
			planet[i][0] = cx;
			planet[i][1] = cy;
			planet[i][2] = r;

			if (d(cx, cy, x1, y1) < r || d(cx, cy, x2, y2) < r) {
				planet[i][3] = 0;
				if (d(cx, cy, x1, y1) < r && d(cx, cy, x2, y2) < r)
					planet[i][3] = 1;
			}
			else planet[i][3] = 1;
		}
		for (int i = 1; i <= n; i++) {
			if (planet[i][3] == 0) continue;
			if (d(planet[i][0], planet[i][1], 0, 0) + planet[i][2] < 5000)
				blank++;
		}
		cout << n - blank << "\n";
	}
	
}