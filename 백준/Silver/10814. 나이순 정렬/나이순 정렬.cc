#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}
int main() {
	int n;
	cin >> n;
	pair<int, string> a;
	vector<pair<int, string>> v;
	for (int i = 0; i < n; i++) {
		cin >> a.first >> a.second;
		v.push_back(a);
	}
	stable_sort(v.begin(), v.end(),compare);
	for (int i = 0; i < n; i++)
		cout << v[i].first << ' ' << v[i].second<<"\n";
}
