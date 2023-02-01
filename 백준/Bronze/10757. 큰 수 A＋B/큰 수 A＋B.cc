#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	vector<int> sum;
	if (s1.size() < s2.size())
		swap(s1, s2);
	for (int i = 0; i < s2.size(); i++) {
		int S1 = s1[i] - '0';
		int S2 = s2[i] - '0';
		sum.push_back(S1 + S2);
	}
	for (int i = s2.size(); i < s1.size(); i++) {
		sum.push_back(s1[i] - '0');

	}
	for (int i = 0; i < sum.size(); i++) {
		if (sum[i] >= 10) {
			if (i == sum.size() - 1) {
				sum.push_back(0);
			}
			sum[i + 1]++;
			sum[i] -= 10;
		}
	}
	reverse(sum.begin(), sum.end());
	for (int i = 0; i < sum.size(); i++) {
		cout << sum[i];
	}

}