#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int c;
		cin >> c;
		cout << c / 25 << ' ' << (c % 25) / 10 << ' ' << ((c % 25) % 10) / 5 << ' ' << ((c % 25) % 10) % 5<<"\n";
	}
}