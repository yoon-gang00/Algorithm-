#include <iostream>
#include <stack>
using namespace std;
int arr[1000001];
int main() {
	int n;
	cin >> n;
	stack<int> s;
	stack<int> num;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (s.empty()) {
			s.push(i);
			num.push(a);
		}
		else {
			if (num.top() >= a) {
				s.push(i);
				num.push(a);
				continue;
			}
			while (num.top() < a) {
				num.pop();
				int x = s.top();
				arr[x] = a;
				s.pop();
				if (s.empty()) break;
			}
			s.push(i);
			num.push(a);
		}
	}
	while (!s.empty()) {
		int x = s.top();
		s.pop();
		arr[x] = -1;
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
}