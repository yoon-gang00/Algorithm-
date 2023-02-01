#include <iostream>
#include <algorithm>
using namespace std;
struct Line {
	int left;
	int right;
};
int dp[110];
int n;
Line line[110];
bool cmp(Line A, Line B)
{
	if (A.left < B.left) 
		return true;
	return false;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> line[i].left >> line[i].right;
	int ok_line = 0;
	sort(line + 1, line + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (line[i].right > line[j].right) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ok_line = max(ok_line, dp[i]);
	}
	cout << n - ok_line << endl;
}
