#include <iostream>
#include <vector>
using namespace std;
int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == -1) {
			break;
		}
		vector<int> v;
		int sum = 0;
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				v.push_back(i);
				sum += i;
			}

		}
		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < v.size() - 1; i++) {
				cout << v[i] << " + ";
			}
			cout << v[v.size() - 1] << "\n";
			continue;
		}
		cout << n << " is NOT perfect." << "\n";
		
	}
	return 0;
}