#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
	int t;
	cin >> t;
	int n;
	string kinds, name;
	while (t--) {
		map<string, int> m;
		cin >> n;
		while (n--) {
			cin >> name >> kinds;
			if (m.find(kinds) == m.end()) {
				m.insert({ kinds,1 });
			}
			else
				m[kinds]++;
		}
		int ans = 1;
		for (auto i : m) {
			ans *= (i.second + 1);
		}
		ans--;
		cout << ans << endl;
	}
	
}