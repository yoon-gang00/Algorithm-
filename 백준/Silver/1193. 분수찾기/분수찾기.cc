#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 1;
	int cnt = 0;
	while (n > 0) {
		n=n - i;
		i++; cnt++;
	}
	if (i % 2 == 1) {
		cout << n + cnt << "/" << i - n - cnt;
	}
	else {
		cout << i - n - cnt << "/" << n + cnt;
	}
	
}