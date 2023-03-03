#include <iostream>
using namespace std;
string s, bomb;
int main() {
	cin >> s >> bomb;
	string ans = "";
	for (int i = 0; i < s.size(); i++) {
		ans += s[i];
		if (ans[ans.size() - 1] == bomb[bomb.size() - 1]) {
			int cnt = 1;
			for (int j = 0; j < bomb.size() - 1; j++) {
				if (ans[ans.size() - 2 - j] == bomb[bomb.size() - 2 - j])
					cnt++;
				else break;
			}
			if (cnt == bomb.size()) {
				for (int t = 0; t < bomb.length(); t++) {
					ans.pop_back();
				}
			}
		}
	}
	ans.size() > 0 ? cout << ans : cout << "FRULA";
	return 0;
}