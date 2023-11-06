#include <iostream>
using namespace std;
int parent[1000001];
int n,m;
int find(int x){
    if(parent[x]==x)
        return x;
    return parent[x] = find(parent[x]);
}
void merge(int x, int y){
    x = find(x);
    y = find(y);
    if(x>y) parent[x]=y;
    else parent[y] = x;
}
void isUnion(int x, int y){
    x=find(x);
    y=find(y);
    if(x==y)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(!a){
            merge(b,c);
        }
        else{
            isUnion(b,c);
        }
    }
    return 0;
}

