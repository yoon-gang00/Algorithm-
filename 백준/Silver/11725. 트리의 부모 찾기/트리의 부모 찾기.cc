#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[100001];
int par[100001];
void dfs(int node){
    for(int i=0;i<graph[node].size();i++){
        int tmp = graph[node][i];
        if(par[tmp]==0){
            par[tmp] = node;
            dfs(tmp);
        }
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    for(int i=2;i<=n;i++){
        cout << par[i] << '\n';
    }
    return 0;
}