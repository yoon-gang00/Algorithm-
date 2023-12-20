#include <iostream>
#include <cstring>
using namespace std;
char map[100][100];
int visit[100][100] = {0, };
int n;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
void dfs(int x, int y){
    visit[x][y]=1;
    for(int i=0;i<4;i++){
        int d_x = x + dx[i];
        int d_y = y + dy[i];
        if(d_x<0||d_y<0||d_x>=n||d_y>=n||visit[d_x][d_y]==1||map[d_x][d_y]!=map[x][y])
            continue;
        dfs(d_x,d_y);
    }
}
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int a =0;
    int b=0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visit[i][j]){
                dfs(i,j);
                a++;
            }
        }
    }
    memset(visit,0,sizeof(visit));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]=='R')
                map[i][j]='G';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visit[i][j]){
                dfs(i,j);
                b++;
            }
        }
    }
    cout << a << " " << b<<"\n";
}