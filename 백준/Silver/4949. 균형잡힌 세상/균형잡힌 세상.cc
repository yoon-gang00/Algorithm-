#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	while (1) {
		string s;
		getline(cin, s);
		if (s == ".")
			break;
		stack<char> stk;
		bool flag = 0; 
		for (int i = 0; i < s.length(); i++) {
			char c = s[i];
			if ((c == '(') || (c == '[')) {
				stk.push(c);
			}
			else if (c == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
			else if (c == ']') {
				if (!stk.empty() && stk.top() == '[') {
					stk.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0 && stk.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}
