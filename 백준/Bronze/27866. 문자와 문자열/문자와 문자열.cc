#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int x;
	cin >> x;
	cout << s.at(x - 1);
}