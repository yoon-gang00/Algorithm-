#include <iostream>
using namespace std;
int n,m;
int map[50][50];
int ans;
int dx[]={-1,0,1,0};//북 동 남 서
int dy[]={0,1,0,-1};

void solve(int cur_x,int cur_y,int cur_dir,int cur_cnt){
    if(cur_cnt>=4){ //후진하는경우
        int new_x = cur_x - dx[cur_dir];
        int new_y = cur_y - dy[cur_dir];
        if(0<=new_x&&new_x<n&&0<=new_y&&new_y<m&&map[new_x][new_y]==2){
                solve(new_x,new_y,cur_dir,0);
        } 
        return;
    }
    map[cur_x][cur_y]=2; //청소완료
    int new_dir = (cur_dir+3)%4 ;
    int new_x = cur_x+dx[new_dir];
    int new_y = cur_y+dy[new_dir];
    if(0<=new_x&&new_x<n&&0<=new_y&&new_y<m){
        if(map[new_x][new_y]==0){
            solve(new_x,new_y,new_dir,0);
        }
        else if(map[new_x][new_y]==1 || map[new_x][new_y]==2){
            solve(cur_x,cur_y,new_dir,cur_cnt+1);
        }
    }
}
int main() {
    int cur_x,cur_y,cur_dir;
    ans =0;
   cin >> n >> m;
   cin >> cur_x >> cur_y >> cur_dir;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin >> map[i][j];
       }
   }
   solve(cur_x,cur_y,cur_dir,0);
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(map[i][j]==2)
                ans++;
       }
   }
   cout << ans;
}
