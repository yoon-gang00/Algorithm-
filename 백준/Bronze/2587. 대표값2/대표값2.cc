#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	vector<int> a(5);
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
	cout << sum / 5<<'\n';
	cout << a[2];
}
