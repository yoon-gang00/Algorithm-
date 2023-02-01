#include <iostream>
#include <cmath>
using namespace std;
int main() {
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) {
			break;
		}
		int max=c;
		int s1 = a;
		int s2 = b;
		if (a > c&&a>b) {
			max = a;
			s1 = b;
			s2 = c;
		}
		if (b > c&&b>a) {
			max = b;
			s1 = a;
			s2 = c;
		}

		if (pow(s1, 2) + pow(s2, 2) == pow(max, 2)) {
			cout << "right"<<"\n";
		}
		else {
			cout << "wrong"<<"\n";
		}
		
	}

}