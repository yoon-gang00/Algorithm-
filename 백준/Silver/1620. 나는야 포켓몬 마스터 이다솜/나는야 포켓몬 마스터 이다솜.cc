#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string name[100001];
	map<string, int> map;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		name[i] = s;
		map.insert(make_pair(s, i));
	}
	for (int i = 1; i <= m; i++) {
		string s;
		int x;
		cin >> s;
		if (isdigit(s[0]) == true) {
			x = stoi(s);
			cout << name[x] << "\n";
		}
		else {
			auto t = map.find(s);
			cout << t->second << "\n";
		}
	}
}