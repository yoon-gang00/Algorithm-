using namespace std;
#include <iostream>
int main() {
	int n,a;
	cin >> n;
	int b = n;
	int cnt=0;
	while (1) {
		a =( n % 10 + n / 10)%10+10*(n%10);
		n=a;
		cnt++;
		if (a == b)
			break;
	}
	cout << cnt<<"\n";
} 