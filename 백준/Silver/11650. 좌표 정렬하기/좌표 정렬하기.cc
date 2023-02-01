#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int x;
	cin >> x;
	vector<pair<long, long>> v;
	pair<long, long> arr;
	for (int i = 0; i < x; i++) {
		cin >> arr.first >> arr.second;
		v.push_back(arr);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < x; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

}
