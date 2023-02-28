#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	int cnt = n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != s[j + 1]) {
				for (int t = j + 1; t < s.length(); t++) {
					if (s[j] == s[t]) {
						cnt--;
						goto STOP;
					}
				}
			}
		}
	STOP:;
	}
	cout << cnt;
}