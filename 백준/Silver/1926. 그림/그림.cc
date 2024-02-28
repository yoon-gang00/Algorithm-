#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[501][501];
    bool visit[501][501];
    queue<pair<int,int>> q;
    
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int size = 0;
    int cnt = 0;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visit[i][j] || arr[i][j]==0)
                continue;
            visit[i][j] = 1;
            q.push({i,j});
            size = 0;
            cnt++;
            
            while(!q.empty()){
                pair<int,int> p = q.front();
                q.pop();
                size++;
                for(int k=0;k<4;k++){
                    int cur_x = p.first + dx[k];
                    int cur_y = p.second + dy[k];
                    
                    if(cur_x<0||cur_x>=n||cur_y<0||cur_y>=m){
                        continue;
                    }
                    if(visit[cur_x][cur_y]||arr[cur_x][cur_y]==0){
                        continue;
                    }
                    visit[cur_x][cur_y]=1;
                    q.push({cur_x,cur_y});
                        
                }
                if(max<size)
                    max = size;
      
            }
        }
    }
    cout << cnt << "\n" << max;
    return 0;
     
}