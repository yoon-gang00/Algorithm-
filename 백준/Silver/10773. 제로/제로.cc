#include <iostream>
#include <stack>
using namespace std;
int main() {
	int k;
	cin >> k;
	stack<int> s;
	int sum = 0;
	for(int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 0) {
			sum -= s.top();
			s.pop();
		}
		else {
			s.push(n);
			sum += n;
		}

	}
	cout << sum;
	return 0;
}