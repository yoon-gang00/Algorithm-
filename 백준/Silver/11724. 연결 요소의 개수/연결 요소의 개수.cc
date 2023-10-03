#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int gr[1001][1001] = {0, };
int visit[1001] = {0, };
void dfs(int x){
    visit[x] =1;
    for(int i=1;i<=n;i++){
        if(gr[x][i]==1&&visit[i]==0)
            dfs(i);
    }
}
int main(){
    cin >> n >> m;
    int cnt=0;
    int a,b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        gr[a][b]= gr[b][a] =1;
    }
    for(int i=1;i<=n;i++){
        if(visit[i]==0){
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}