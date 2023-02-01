#include <iostream>

using namespace std;
int result[3];
int arr[2187][2187];
void paper(int x, int y, int n) {
	int first = arr[x][y];
	bool flag = true;

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[i][j] != first) {
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		result[first + 1]++;
	}
	else {
		for (int a = x; a < x + n; a += n / 3) {
			for (int b = y; b < y + n; b += n / 3) {
				paper(a, b, n / 3);
			}
		}
	}
}
int main() {
	int n;
	cin >> n; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	paper(0, 0, n);
	for (int i = 0; i < 3; i++) {
		cout << result[i] << endl;
	}
	return 0;
}