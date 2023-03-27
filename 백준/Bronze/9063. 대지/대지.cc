#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long n,x,y;
	cin >> n;
	long long maxX=-10000, maxY=-10000, minX= 10000, minY=10000;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		maxX = max(x, maxX);
		minX = min(x, minX);
		maxY = max(y, maxY);
		minY = min(y, minY);
	}
	cout << (maxX - minX) * (maxY - minY);
}