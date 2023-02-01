#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
bool team[20] = {};
int score[20][20] = {};
int n, mymin = 99999999;
void maketeam(int idx, int cnt) {
	vector<int> start;
	vector<int> link;
	int start_score = 0;
	int link_score = 0;
	if (cnt == (n / 2)) {
		for (int i = 0; i < n; i++) {
			if (team[i] == true)
				start.push_back(i);
			else
				link.push_back(i);
		}
		for (int i = 0; i < (n / 2); i++) {
			for (int j = 0; j < (n / 2); j++) {
				start_score += score[start[i]][start[j]];
				link_score += score[link[i]][link[j]];
			}
		}
		if (abs(start_score - link_score) < mymin)
			mymin = abs(start_score - link_score);
		return;
	}
	for (int i = idx; i < n; i++) {
		if (team[i])
			continue;
		else {
			team[i] = true;
			maketeam(i, cnt + 1);
			team[i] = false;
		}
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &score[i][j]);
	maketeam(0, 0);
	printf("%d", mymin);
}