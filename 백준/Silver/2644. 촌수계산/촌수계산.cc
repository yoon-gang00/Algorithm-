#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int arr[102][102];
int visited[102];
int x,y;
int n,m;
void bfs(int t){
    q.push(t);
    while(!q.empty()){
        t = q.front();
        q.pop();
        for(auto i=1;i<=n;i++){
            if(arr[t][i]!=0 && !visited[i]){
                q.push(i);
                visited[i]=visited[t]+1;
            }
        }
    }
    
}
int main(){
    cin >> n;
    cin >> x >> y;
    cin >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    bfs(x);
    if(visited[y]==0)
        visited[y]=-1;
    cout << visited[y];
    
    
}