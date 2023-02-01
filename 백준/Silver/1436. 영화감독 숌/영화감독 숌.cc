#include <iostream>
#include <string>
using namespace std;
int search(int n) {
	int i = 666;
	int cnt = 0;
	string x;
	while (1) {
		x = to_string(i);
		for(int j=0;j<x.length()-2;j++)
			if (x[j] == '6' && x[j + 1] == '6' && x[j + 2] == '6') {
				cnt++;
				if (cnt == n)
					return i;
				break;
			}
		i++;
	}
}
int main() {
	int n;
	cin >> n;
	cout << search(n);
}