#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<pair<int,int>> v[n+1];
    bool visit[1001]={false};
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    int ans=0;
    priority_queue<pair<int,int>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        int cur_cost = -pq.top().first;
        int cur_index = pq.top().second;
        pq.pop();
        if(visit[cur_index]){
            continue;
        }
        visit[cur_index]=true;
        ans += cur_cost;
        for(auto next : v[cur_index]){
            int next_index = next.first;
            int next_cost = next.second;
            if(visit[next_index]){
                continue;
            }
            pq.push({-next_cost, next_index});
        }
    }
    cout << ans;
    return 0;
}
