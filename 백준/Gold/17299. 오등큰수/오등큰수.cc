#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n + 1);
	vector<int> null(n + 1, -1);
	vector<int> cnt(1000000 + 1, 0);
	stack<int> s;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	for (int i = 1; i <= n; i++) {
		while (!s.empty() && cnt[arr[s.top()]] < cnt[arr[i]]) {
			null[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 1; i <= n; i++) {
		cout << null[i] << ' ';
	}
	cout << '\n';
	return 0;
}