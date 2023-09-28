#include <iostream>
#include <vector>
using namespace std;
vector<int> parent;
vector<int> path;

int arr[201][201];

int find(int node){
    if(node == parent[node])
        return node;
    else{
        int other = find(parent[node]);
        parent[node] = other;
        return other;
    }
    return parent[node];
}
void uni(int x, int y){
    x = find(x);
    y = find(y);
    if(x==y)
        return;
    if(x<y)
        parent[y] = x;
    else parent[x]=y;
}
int main(){
    int n,m;
    cin >> n >> m;
    parent = vector<int> (n+1,0);
    path = vector<int> (m+1,0);
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> arr[i][j];
            if(arr[i][j]==1)
                uni(i,j);
        }
    }
    for(int i=1;i<=m;i++)
        cin >> path[i];
    bool tmp =1;
    for(int i=1;i<m;i++){
        if(find(path[i])!= find(path[i+1])){
            tmp =0;
            break;
        }
    }
    if(tmp==1) cout << "YES";
    else cout <<"NO";
}