#include <iostream>
using namespace std;
int n, m;
int arr[9] = { 0, };
bool visit[9] = { 0, };
void dfs(int num,int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = num; i <= n; i++) {
		if (!visit[i]) {
			visit[i] = true;
			arr[cnt] = i;
			dfs(i+1,cnt + 1);
			visit[i] = false;
		}
	}
}
int main() {
	cin >> n >> m;
	dfs(1,0);
}