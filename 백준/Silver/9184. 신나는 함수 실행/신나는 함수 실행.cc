#include <iostream>
using namespace std;
int arr[21][21][21] = { 0, };
int recur_w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20)return recur_w(20, 20, 20);
	if (arr[a][b][c] != 0)return arr[a][b][c];
	if (a < b && b < c) {
		arr[a][b][c] = recur_w(a, b, c - 1) + recur_w(a, b - 1, c - 1) - recur_w(a, b - 1, c);
		return arr[a][b][c];
	}
	else {
		arr[a][b][c] = recur_w(a - 1, b, c) + recur_w(a - 1, b - 1, c) + recur_w(a - 1, b, c - 1) - recur_w(a - 1, b - 1, c - 1);
		return arr[a][b][c];
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c;
	while(true) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
			break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << recur_w(a, b, c) << "\n";
	}
	return 0;
}