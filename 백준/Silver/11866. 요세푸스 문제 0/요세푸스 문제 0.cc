#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	queue<int> q;
	int n,k;
	cin >> n>>k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int cnt = 1;
    cout << '<';
	while (!q.empty()) {
		if (cnt % k == 0) {
			int ans = q.front();
			q.pop();
			if (q.empty()) {
				cout << ans << ">";
			}
			else {
				cout << ans << ", ";
			}
		}
		else {
			int num = q.front();
			q.pop();
			q.push(num);
		}
		cnt++;
	}

	
}
