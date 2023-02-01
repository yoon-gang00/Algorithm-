#include <iostream>
#include <queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		queue<pair<int, int>> q;
		priority_queue<int> qq;
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			q.push({ j,a });
			qq.push(a);
		}
		int cnt = 0;
		while (!q.empty()) {
			int index = q.front().first;
			int val = q.front().second;
			q.pop();
			if (qq.top() == val) {
				qq.pop();
				cnt++;
				if (index == m) {
					cout << cnt << endl;
					break;
				}
			}
			else {
				q.push({ index,val });
			}
		}
	}
	return 0;

	
}