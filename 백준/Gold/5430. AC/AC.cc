#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string p;
		cin >> p;
		int n;
		cin >> n;
		string arr;
		cin >> arr;
		deque<int> dq;
		string tmp = "";
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == '[') {
				continue;
			}
			else if (arr[i] >= '0' && arr[i] <= '9') {
				tmp += arr[i];
			}
			else if (arr[i] == ',' || arr[i] == ']') {
				if (!tmp.empty()) {
					dq.push_back(stoi(tmp));
					tmp.clear();
				}
			}
		}
		bool flag = true;
		bool isEmpty = false;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				flag = !flag;
			}
			else {
				if (!dq.empty()) {
					if (flag) {
						dq.pop_front();
					}
					else {
						dq.pop_back();
					}
				}
				else {
					isEmpty = true;
					cout << "error\n";
					break;
				}
			}
		}
		if (!isEmpty) {
			cout << "[";
			if (flag) {
				while (!dq.empty()) {
					cout << dq.front();
					dq.pop_front();
					if (!dq.empty()) cout << ",";
				}
			}
			else {
				while (!dq.empty()) {
					cout << dq.back();
					dq.pop_back();
					if (!dq.empty()) cout << ",";
				}
			}
			cout << "]\n";
		}
	}

}