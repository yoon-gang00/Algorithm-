#include <iostream>
#include <queue>
using namespace std;
int arr[100][100][100];
int dir[6][3]{{1,0,0},{0,1,0},{-1,0,0},{0,-1,0},{0,0,1},{0,0,-1}};
int n,m,h;
queue<pair<pair<int,int>,int>> q;
void bfs(){
    int cnt=0;
    while(!q.empty()){
        int size = q.size();
        cnt++;
        for(int i=0;i<size;i++){
            int a = q.front().first.first;
            int b = q.front().first.second;
            int c = q.front().second;
            q.pop();
            for(int j=0;j<6;j++){
                int n_a = a + dir[j][0];
                int n_b = b + dir[j][1];
                int n_c = c + dir[j][2];
                if(n_a>=0 && n_a<m&&n_b>=0&&n_b<n&&n_c>=0&&n_c<h&&arr[n_c][n_a][n_b]==0){
                    q.push({ {n_a,n_b},n_c});
                    arr[n_c][n_a][n_b]=1;
                }
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(arr[i][j][k]==0){
                    cout << -1;
                    return;
                }
            }
        }
    }
    cout << cnt-1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> h;
    for(int i=0;i<h;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                cin>>arr[i][j][k];
                if(arr[i][j][k]==1)
                    q.push({{j,k},i});
            }
        }
    }
    bfs();
}