#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100001
using namespace std;

vector<int> vec[MAX];
int v_order[MAX];
bool visit[MAX];
int order = 0;
int n, m, r;
void dfs(int n) {
    if (!visit[n]) {
        visit[n] = true;
        order++;
        v_order[n] = order;
    }
    else {
        return;
    }
    for (int i = 0; i < vec[n].size(); i++) {
        int next = vec[n][i];
        dfs(next);
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
        sort(vec[i].begin(), vec[i].end());
    dfs(r);
    for (int i = 1; i <= n; i++) {
        cout << v_order[i] << "\n";
    }
    return 0;
}