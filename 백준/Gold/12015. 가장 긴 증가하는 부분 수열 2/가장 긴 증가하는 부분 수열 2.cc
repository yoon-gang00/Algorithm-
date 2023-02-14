#include <iostream>
#include <vector>
using namespace std;
int n;
vector <int> v, res;
int lower(vector<int>& v, int key) {
	int left = 0;
	int right = v.size() - 1;
	int mid = right;
	while (right > left) {
		int mid = (right + left) / 2;
		if (key > v[mid]) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	return right;
}
void count() {
	int cnt = 1;
	res.push_back(v[0]);
	for (int i = 1; i < n; i++) {
		if (res.back() < v[i]) {
			res.push_back(v[i]);
			cnt++;
		}
		else {
			int x = lower(res, v[i]);
			res[x] = v[i];
		}
	}
	cout << cnt;
}
int main() {
	cin >> n;
	v.resize(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	count();
	return 0;
}