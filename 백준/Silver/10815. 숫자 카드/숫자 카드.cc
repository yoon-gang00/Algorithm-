#include <iostream>
#include <set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, args;
	set<int> field;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> args;
		field.insert(args);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> args;
		cout << field.count(args) << ' ';
	}
	return 0;
}