#include <iostream>
using namespace std;
int n;
int arr[11];
int operators[4];
int mymin = 1000000001;
int mymax = -1000000001;
void ans(int result, int idx) {
	if (idx == n) {
		if (result > mymax)
			mymax = result;
		if (result < mymin)
			mymin = result;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (operators[i] > 0) {
			operators[i]--;
			if (i == 0)
				ans(result + arr[idx], idx + 1);
			else if (i == 1)
				ans(result - arr[idx], idx + 1);
			else if (i == 2)
				ans(result * arr[idx], idx + 1);
			else
				ans(result / arr[idx], idx + 1);
			operators[i]++;
		}
	}
	return;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> operators[i];
	ans(arr[0], 1);
	cout << mymax << '\n' << mymin;
}