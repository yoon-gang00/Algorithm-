#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int avg=0;
		vector<int> v;
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			v.push_back(a);
			avg += a;
		}
		avg = avg / n;
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (avg < v[j]) {
				cnt++;
			}
		}
		double percent;
		percent = (double)cnt / n * 100;
		cout << fixed;
		cout.precision(3);

		cout << percent << "%" << endl;
	}
}