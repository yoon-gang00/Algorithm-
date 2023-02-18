#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 100001
using namespace std;

vector<int> vec[MAX];
int v_order[MAX];
bool visit[MAX];
int order = 0;
int n, m, r;
void bfs(int n) {
    queue<int> q;
    q.push(n);
    visit[n] = 1;
    order++;
    v_order[n] = order;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < vec[x].size(); i++) {
            int tmp = vec[x][i];
            if (!visit[tmp]) {
                order++;
                v_order[tmp] = order;
                q.push(tmp);
                visit[tmp] = 1;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> r;
    for (int i = 1; i <= m; i++) {
        int v, u;
        cin >> v >> u;
        vec[v].push_back(u);
        vec[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
        sort(vec[i].begin(), vec[i].end(),greater<int>());
    bfs(r);
    for (int i = 1; i <= n; i++) {
        cout << v_order[i] << "\n";
    }
    return 0;
}