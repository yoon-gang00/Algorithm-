using namespace std;
#include <iostream>
#include <string>
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		int cnt = 0;
		int score = 0;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] == 'O') {
				cnt++;
				score += cnt;
			}
			else
				cnt = 0;
		}
		cout << score << "\n";
	}
}