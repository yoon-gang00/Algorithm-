#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int x=1;
	int y = 1;
	for (int i = 0; i < k; i++) {
		x=x* n;
		n--;
		y *= (i + 1);
	}
	cout << x / y;

}