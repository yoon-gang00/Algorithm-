#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, m, v;
int visit[1001] = { 0, };
queue<int> q;
int graph[1001][1001];
void dfs(int v) {
    visit[v] = 1;
    cout << v << " ";
    for (int i = 1; i <= n; i++) {
        if (graph[v][i] == 1 && visit[i] == 0) {
            dfs(i);
        }
    }
}
void bfs(int v) {
    q.push(v);
    visit[v] = 1;
    cout << v<<" ";
    while (!q.empty()) {
        v = q.front(); 
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (graph[v][i] == 1 && visit[i] == 0) {
                visit[i] = 1;
                q.push(i);
                cout << i << " ";
            }
        }
    }
}
void reset() {
    for (int i = 1; i <= n; i++) {
        visit[i] =0;
    }
}
int main() {
    cin >> n >> m>>v;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    reset();
    dfs(v);
    cout << "\n";
    reset();
    bfs(v);
    return 0;
}