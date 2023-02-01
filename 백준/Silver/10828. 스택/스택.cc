#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	
	stack<int> s;
	string str;
	if (n < 1 || n>10000)
		return 0;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int num = 0;
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << '\n';
		}
		else if (str == "empty") {
			if (s.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (str == "top") {
			if (s.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
	}
	return 0;
}