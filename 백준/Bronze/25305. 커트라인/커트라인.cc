#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < a.size(); i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[n-k];
}