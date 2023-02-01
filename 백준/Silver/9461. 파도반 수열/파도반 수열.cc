#include <iostream>
using namespace std;
long long pibo[101] = { 0,1,1, };
long long P(int n) {
	if (n < 3)
		return pibo[n];
	else if (pibo[n] == 0)
		pibo[n] = P(n - 2) + P(n - 3);
	return pibo[n];
}
int main() {
	int T;
	cin >> T;
	int n;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << P(n) << '\n';
	}
}
