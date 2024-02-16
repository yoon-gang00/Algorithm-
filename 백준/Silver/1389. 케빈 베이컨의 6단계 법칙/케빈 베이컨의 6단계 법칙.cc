#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[101];
int map[101][101];
queue<int> q;
void bfs(int x){
    int arr[101]={0, };
    q.push(x);
    arr[x]=1;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i=0;i<v[tmp].size();i++){
            int index = v[tmp][i];
            if(arr[index]==0){
                arr[index]=1;
                q.push(index);
                map[index][x] = map[tmp][x]+1;
                map[x][index] = map[x][tmp]+1;
            }
        }
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int a,b;
    int sum=0;
    int result=0;
    int min = 1000000000;
    for(int i=0;i<m;i++){
        cin >> a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            map[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        bfs(i);
    }
    for(int i=1;i<=n;i++){
        sum = 0;
        for(int j=1;j<=n;j++){
            sum+=map[i][j];
        }
        if(min > sum){
            min = sum;
            result = i;
        }
    }
    cout << result << "\n";
    return 0;
}