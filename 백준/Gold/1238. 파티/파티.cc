#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define INTMAX 8888888888
vector<pair<int, int>> v[2][1001];
int d[2][1001];
int cost[1001];
void djk(int dir, int x)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, x});
    d[dir][x] = 0;
    while (!pq.empty())
    {
        int cnode = pq.top().second;
        int ccost = pq.top().first;
        pq.pop();
        if (d[dir][cnode] < ccost)
            continue;
        int size = static_cast<int>(v[dir][cnode].size());
        for (int i = 0; i < size; ++i)
        {
            int nnode = v[dir][cnode][i].first;
            int ncost = v[dir][cnode][i].second + ccost;
            if (d[dir][nnode] > ncost)
            {
                pq.push({ncost, nnode});
                d[dir][nnode] = ncost;
            }
        }
    }
}
int main()
{
    int n, m, x;
    int ans = -1;
    cin >> n >> m >> x;
    for (int i = 0; i < m; i++)
    {
        int start, end, time;
        cin >> start >> end >> time;
        v[0][start].push_back({end, time});
        v[1][end].push_back({start, time});
    }
    fill(d[0], d[1] + 1001, INTMAX);
    djk(1, x);
    djk(0, x);
    for (int i = 1; i <= n; ++i)
    {
        ans = max(ans, d[0][i] + d[1][i]);
    }
    cout << ans;
    return 0;
}