#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int rt;
	for (int i =m; i <= n; i++) {
		rt = sqrt(i);
		if (rt == 1 && i != 1) {
			cout << i << '\n';
			continue;
		}
		if (i % 2==1) {
			for (int j = 2; j <= rt; j++) {
				if (i % j == 0)
					break;
				if (j == rt)
					cout << i << "\n";
			}
		}
	}

}