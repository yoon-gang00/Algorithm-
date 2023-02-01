#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	cin >> a;
	int result = 0;
	string num;
	bool isMinus = false;
	for (int i = 0; i <= a.size(); i++) {
		if (a[i] == '-' || a[i] == '+' || i == a.size()) {
			if (isMinus) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += a[i];
		}
		if (a[i] == '-') {
			isMinus = true;
		}
	}
	cout << result;
}