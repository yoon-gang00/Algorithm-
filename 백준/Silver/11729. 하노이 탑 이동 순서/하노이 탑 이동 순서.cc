#include <iostream>
#include <cmath>
using namespace std;
void solve(int n, int from, int to) {
	if (n == 0)
		return;
	int mid = 6 - from - to;
	solve(n - 1, from, mid);
	cout << '\n' << from <<" " << to;
	solve(n - 1, mid, to);

}
int main() {
	int n;
	cin >> n;
	int k = pow(2, n) - 1;
	cout << k;
	solve(n, 1, 3);
	return 0;
}