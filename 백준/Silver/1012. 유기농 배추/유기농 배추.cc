#include <iostream>
#include <vector>
using namespace std;
int t, m, n, k;
int map[51][51];
int visit[51][51];
int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };
void reset() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			map[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			visit[i][j] = 0;
		}
	}
}
void DFS(int y, int x) {
	visit[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= m || ny < 0 || ny >= n)
			continue;
		if (map[ny][nx] == 1 && visit[ny][nx] == 0) {
			DFS(ny, nx);
		}
	}
}
int main() {
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		reset();
		while (k--) {
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (visit[i][j] == 0 && map[i][j] == 1) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}