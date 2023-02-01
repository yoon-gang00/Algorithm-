#include <iostream>
using namespace std;
int sudoku[9][9];
bool check(int x, int y, int n) {
	for (int i = 0; i < 9; i++) {
		if (sudoku[x][i] == n) return false;
		if (sudoku[i][y] == n) return false;
	}
	for (int i = (x / 3) * 3; i < (x / 3) * 3 + 3; i++)
		for (int j = (y / 3) * 3; j < (y / 3) * 3 + 3; j++)
			if (sudoku[i][j] == n) return false;
	return true;
}
void solve(int x, int y) {
	if (x == 9) {
		y++;
		x = 0;
	}
	if (y == 9) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << sudoku[i][j] << " ";
			cout << endl;
		}
		exit(0);
	}
	if (sudoku[x][y] != 0) {
		solve(x + 1, y);
		return;
	}
	for (int i = 1; i <= 9; i++) {
		if (check(x, y, i)) {
			sudoku[x][y] = i;
			solve(x + 1, y);
			sudoku[x][y] = 0;
		}
	}
}
int main() {
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> sudoku[i][j];

	solve(0, 0);
	return 0;
}