#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <functional>
#define INF INT_MAX
using namespace std;
int v, e, st;
vector <pair<int, int>> adj[20001];
int table[20001];
int main() {
	cin >> v >> e >> st;
	fill(table, table + v + 1, INF);
	for (int i = 0; i < e; i++) {
		int from, to, wgt;
		cin >> from >> to >> wgt;
		adj[from].push_back({ wgt,to });
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minH;
	table[st] = 0;
	minH.push({ table[st],st });
	while (!minH.empty()) {
		auto tmp = minH.top();
		minH.pop();
		int dist = tmp.first;
		int idx = tmp.second;
		if (table[idx] < dist)
			continue;
		for (auto next : adj[idx]) {
			int cost = next.first;
			int next_idx = next.second;
			if (table[next_idx] > dist + cost) {
				table[next_idx] = dist + cost;
				minH.push({ table[next_idx],next_idx });
			}
		}
	}
	for (int i = 1; i <= v; i++) {
		if (table[i] == INF) cout << "INF\n";
		else
			cout << table[i] << "\n";
	}
}