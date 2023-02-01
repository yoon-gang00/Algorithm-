#include <iostream>
using namespace std;
#define DIV 1000
int a[5][5];
int temp[5][5];
int res[5][5];
void naive_matrix_power(int n, int A[][5], int B[][5]) {
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			for (int t = 0; t < n; t++) {
				temp[i][j] += (A[i][t] * B[t][j]) % DIV;
				temp[i][j] %= DIV;
			}
		}
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			B[i][j] = temp[i][j];
			temp[i][j] = 0;
		}
}
void matrix_power(int n, long long b) {
	while (b > 0) {
		if (b % 2 == 1)
			naive_matrix_power(n, a, res);
		naive_matrix_power(n, a, a);

		b /= 2;
	}
}
int main() {
	int n;
	long long b;
	cin >> n >> b;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			res[i][j] = a[i][j] % DIV;
		}
	matrix_power(n, b - 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << res[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}