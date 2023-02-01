#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(string a, string b){
	if (a.length() == b.length())
	{
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i])
				return a[i] < b[i];
		}
	}
	return a.length() < b.length();
}
int main() {
	int n;
	string s;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);
	cout << v[0] << '\n';
	for (int i = 1; i < n; i++) {
		if (v[i - 1] == v[i]) {
			continue;
		}
		cout << v[i] << '\n';
	}
}