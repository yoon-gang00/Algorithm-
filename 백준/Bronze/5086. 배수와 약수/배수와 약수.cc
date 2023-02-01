#include <iostream>
#include <cmath>

using namespace std;
int main() {
	while (1) {
		int x, y;
		cin >> x >> y;
		if (x == 0)
			break;
		if (y % x == 0)
			cout << "factor" << endl;
		else if (x % y == 0)
			cout << "multiple" << endl;
		else
			cout << "neither" << endl;
	}
	return 0;
}