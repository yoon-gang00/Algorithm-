#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int bfs[100][100];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int m,n,k;
queue<pair<int,int>> q;
int solve(){
    int cnt = 0;
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<0||nx>=n||ny<0||ny>=m){
                continue;
            }
            if(!bfs[ny][nx]){
                cnt++;
                bfs[ny][nx]=1;
                q.push({ny,nx});
            }
        }
    }
    return cnt;
}
int main(){
    int x,y,a,b;
    int cnt=0;
    int visit[100];
    cin >> m >> n >>k;
    while(k--){
        cin >> x >> y >> a >> b;
        for(int i= y;i<b;i++){
            for(int j=x;j<a;j++){
                bfs[i][j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!bfs[i][j]){
                q.push({i,j});
                visit[cnt++]=solve();
                if(!visit[cnt-1])
                    visit[cnt-1]=1;
            }
        }
    }
    sort(visit,visit+cnt);
    cout << cnt << "\n";
    for(int i=0;i<cnt;i++)
        cout << visit[i]<<" ";
}