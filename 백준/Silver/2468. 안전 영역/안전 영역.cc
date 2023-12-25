#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int arr[101][101];
int map[101][101];
bool visit[101][101];
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
vector<int> v;
int cnt;
void dfs(int y, int x){
    visit[y][x]=1;
    for(int i=0;i<4;i++){
        int n_y = y + dy[i];
        int n_x = x + dx[i];
        if(n_y<0||n_x<0||n_y>=n||n_x>=n)
            continue;
        if(map[n_y][n_x]&&!visit[n_y][n_x]){
            visit[n_y][n_x] = 1;
            dfs(n_y,n_x);
        }
    }
}
void reset(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            map[i][j]=0;
            visit[i][j]=0;
        }
    }
    cnt =0;
}
int main(){
    int m_hgt = -1;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            if(arr[i][j]>m_hgt){
                m_hgt = arr[i][j];
            }
        }
    }
    for(int h=1;h<=m_hgt;h++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]<h){
                    map[i][j]=0;
                    
                }
                else{
                    map[i][j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map[i][j]&&!visit[i][j]){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        v.push_back(cnt);
        reset();
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-1];
}