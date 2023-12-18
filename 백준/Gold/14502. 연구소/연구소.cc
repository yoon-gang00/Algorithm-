#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int arr[10][10];
int arr2[10][10];
bool visit[10][10]={0};
int dxy[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int cnt =3;
int ans =0;
void BFS(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            arr2[i][j]=arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr2[i][j]==2){
                queue<pair<int,int>> q;
                q.push({i,j});
                visit[i][j]=1;
                while(!q.empty()){
                    int d_y = q.front().first;
                    int d_x = q.front().second;
                    q.pop();
                    for(int x=0;x<4;x++){
                        int n_x = d_x + dxy[x][0];
                        int n_y = d_y + dxy[x][1];
                        if(!visit[n_y][n_x]&&arr2[n_y][n_x]==0){
                            q.push({n_y,n_x});
                            visit[n_y][n_x]=1;
                            arr2[n_y][n_x]=2;
                        }
                    }
                }
            }
        }
    }
    memset(visit,0,sizeof(visit));
    int tmp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr2[i][j]==0)
                tmp++;
        }
    }
    if(tmp>ans)
        ans = tmp;
}
void find()
{
    if(cnt == 0)
        return BFS();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==0){
                cnt--;
                arr[i][j] = 1;
                find();
                cnt++;
                arr[i][j]=0;
            }
        }
    }
}
int main(){
    cin >> n >> m;
    memset(arr,-1,sizeof(arr));
    memset(arr2,-1,sizeof(arr2));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
        }
    }
    find();
    cout << ans << '\n';
}