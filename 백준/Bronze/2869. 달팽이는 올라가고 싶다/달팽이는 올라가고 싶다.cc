#include <iostream>
using namespace std;
int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int ans = 0;
	if ((v - a) % (a - b) == 0)
		ans = (v - a) / (a - b) + 1;
	else
		ans = (v - a) / (a - b) + 2;
	cout << ans;
}