#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct UnionFind
{
    vector<int> parent, rank;
    UnionFind(int n) : parent(n), rank(n, 0)
    {
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }
    int find(int u)
    {
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }

    void unite(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u != v)
        {
            if (rank[u] > rank[v])
            {
                parent[v] = u;
            }
            else
            {
                parent[u] = v;
                if (rank[u] == rank[v])
                    rank[v]++;
            }
        }
    }
};
struct Edge
{
    int u, v, weight;
    bool operator<(const Edge &other) const
    {
        return weight < other.weight;
    }
};
int main()
{
    int v, e;
    cin >> v >> e;
    vector<Edge> edges(e);
    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
        edges[i].u--;
        edges[i].v--;
    }
    sort(edges.begin(), edges.end());
    UnionFind uf(v);
    int mst_weight = 0;
    for (Edge &edge : edges)
    {
        if (uf.find(edge.u) != uf.find(edge.v))
        {
            uf.unite(edge.u, edge.v);
            mst_weight += edge.weight;
        }
    }
    cout << mst_weight;
}