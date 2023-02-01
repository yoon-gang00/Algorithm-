#include <iostream>
int c[1001][1001];
using namespace std;
void combi(int n, int k) {
	for (int i = 1; i <= n; i++) {
		c[i][0] = 1;
		c[i][i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++)
			c[i][j] = c[i - 1][j - 1] + c[i - 1][j] ;

	}
	cout << c[n][k];
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		combi(m, n);
		cout << "\n";
	}
	
}