#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 0;
	
	while (n > 0) {
		if (i == 0)
			n = n - 1;
		else {
			n -= i * 6;
		}
		i++;
	}
	cout << i;

}