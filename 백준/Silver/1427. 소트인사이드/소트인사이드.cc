#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(char a, char b) {
	return a > b;
}
int main() {
	string a;
	int n;
	cin >> n;
	a = to_string(n);
	sort(a.begin(), a.end(), compare);
	cout << a;
}
