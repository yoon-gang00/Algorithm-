#include <iostream>
#include <vector>
#include <algorithm>
int arr[1001];
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> res;
	sort(arr, arr + n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += arr[i];
		res.push_back(ans);
	}
	int sum=0;
	for (int i = 0; i < res.size(); i++) {
		sum += res[i];
	}
	cout << sum;
	return 0;
}
