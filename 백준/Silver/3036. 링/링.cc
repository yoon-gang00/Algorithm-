#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
	int n;
	cin >> n;
	int g;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 1; i < n; i++) {
		if (v[0] > v[i]) {
			g = gcd(v[0], v[i]);
		}
		else
			g = gcd(v[i], v[0]);
		cout << v[0] / g << "/" << v[i] / g << endl;
	}
	
}