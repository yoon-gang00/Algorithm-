using namespace std;
#include <iostream>
#include <vector>
int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int max, min;
	max = v[0];
	min = v[0];
	for (int i = 0; i < n; i++) {
		if (v[i] > max) {
			max = v[i];
		}
		if (v[i] < min) {
			min = v[i];
		}
	}
	cout << min << " " << max << endl;
} 