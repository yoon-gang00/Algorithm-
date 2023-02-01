#include <iostream>
#include <stack>
#include <string>
using namespace std;
string sol(string str) {
	stack<char> s;
	for (char ch : str) {
		if (ch == '(') {
			s.push(ch);
		}
		else {
			if (!s.empty()) {
				s.pop();
			}
			else {
				return "NO";
			}
		}
	}
	if (s.empty()) {
		return "YES";
	}
	else {
		return "NO";
	}
}
int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		string str;
		cin >> str;
		cout << sol(str) << '\n';
	}
	return 0;
}
