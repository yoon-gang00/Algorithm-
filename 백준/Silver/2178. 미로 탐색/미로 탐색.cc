#include <iostream>
#include <utility>
#include <string>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string arr[101];
	int move[101][101];
	bool visit[101][101];
	queue<pair<int, int>> q;
	int n, m;
	cin >> n >> m;
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	move[0][0] = 1;
	q.push({ 0,0 });
	visit[0][0] = 1;

	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				continue;
			}
			if (arr[nx][ny] == '0' || visit[nx][ny]) {
				continue;
			}
			move[nx][ny] = move[cur.first][cur.second] + 1;
			q.push({ nx,ny });
			visit[nx][ny] = 1;
		}
	}
	cout << move[n - 1][m - 1];
	return 0;
}
