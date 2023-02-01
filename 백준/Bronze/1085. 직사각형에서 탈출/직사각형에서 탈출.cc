#include <iostream>
using namespace std;
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min;
	if (x > w - x) {
		min = w - x;
	}
	else {
		min = x;
	}
	if (min > h - y) {
		min = h - y;
		
	}
	if (min > y) {
		min = y;
	}
	cout << min;

}