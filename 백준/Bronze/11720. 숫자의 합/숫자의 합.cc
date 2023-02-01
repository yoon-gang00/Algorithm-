#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (int)s[i] - 48;
	}
	cout << ans;

}