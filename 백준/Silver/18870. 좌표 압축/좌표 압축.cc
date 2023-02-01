#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<long long> v;
	vector<long long> c;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		c.push_back(a);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(v.begin(), v.end(), c[i]) - v.begin() << " ";
	}
}
