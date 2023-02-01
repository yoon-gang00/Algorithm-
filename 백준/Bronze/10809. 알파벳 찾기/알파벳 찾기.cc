#include <iostream>
#include <string>
using namespace std;
int main() {
	int alpha[26];
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	string s;
	cin >> s;
	for (int i = 97; i <= 122; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (i == s[j]) {
				alpha[s[j] - 97] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}