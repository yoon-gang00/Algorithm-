#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<long,long> a, pair<long,long> b){
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
int main() {
	int x;
	cin >> x;
	vector<pair<long, long>> v;
	pair<long, long> arr;
	for (int i = 0; i < x; i++) {
		cin >> arr.first >> arr.second;
		v.push_back(arr);
	}
	sort(v.begin(), v.end(),compare);
	for (int i = 0; i < x; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

}
