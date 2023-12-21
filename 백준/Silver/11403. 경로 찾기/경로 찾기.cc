#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<int> v[100];
int visit[100];
void dfs(int x){
    for(int i=0;i<v[x].size();i++){
        int a = v[x][i];
        if(visit[a]==0){
            visit[a] = 1;
            dfs(a);
        }
    }
}
int main(){
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> x;
            if(x==1)
                v[i].push_back(j);
        }
    }
    for(int i=0;i<n;i++){
        memset(visit,0,sizeof(visit));
        dfs(i);
        for(int j=0;j<n;j++){
            cout << visit[j] << " ";
        }
        cout << "\n";
    }
}