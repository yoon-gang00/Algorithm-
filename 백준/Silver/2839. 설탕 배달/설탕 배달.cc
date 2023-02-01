#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 5 == 0) {
		cout << n / 5;
	}
	else if (n % 5 == 3) {
		cout << n / 5 + 1;
	}
	else if (n % 5 == 1)
	{
		cout << n / 5 + 1;
	}
	else if (n % 5 == 4&& n>4)
	{
		cout << n / 5 + 2;
	}
	else if (n % 5 == 2&&n>7) {
		cout << n / 5 + 2;
	}
	else {
		cout << "-1";
	}
}