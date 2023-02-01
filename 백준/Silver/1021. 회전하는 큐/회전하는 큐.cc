#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int n,m;
	cin >> n >> m;
	deque<int> dq1;
	deque<int> dq2;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	int sum = 0;
	while (m--) {
		dq1 = dq;
		dq2 = dq;
		int val;
		int front = 0;
		int back = 0;
		cin >> val;
		while (dq1.front() != val) {
			dq1.push_back(dq1.front());
			dq1.pop_front();
			front++;
		}
		dq1.pop_front();
		while (dq2.front() != val) {
			dq2.push_front(dq2.back());
			dq2.pop_back();
			back++;
		}
		dq2.pop_front();
		if (front > back) {
			sum += back;
			dq = dq2;
		}
		else {
			sum += front;
			dq = dq1;
		}
	}
	cout << sum;
}