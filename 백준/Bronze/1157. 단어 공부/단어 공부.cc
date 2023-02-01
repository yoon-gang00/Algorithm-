#include <iostream>
#include <string>
using namespace std;
int main() {
	int alpha[26]={ 0 };
	string s;
	cin >> s;
	int num;
	int cnt=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			num = s[i] - 65;
			alpha[num] ++;
		}
		else if (s[i] >= 97 && s[i] <= 122) {
			num = s[i] - 97;
			alpha[num] ++;
		}
	}
	int max = 0;
	int max_index;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max) {
			max = alpha[i];
			max_index = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max) {
			cnt++;
		}
	}
	if (cnt != 1)
		cout << "?";
	else
		cout << (char)(max_index + 65);
}