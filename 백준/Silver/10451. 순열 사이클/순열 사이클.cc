#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v[1001];
bool chk[1001];
void dfs(int node){
    chk[node] = 1;
    for(int i=0;i<v[node].size();i++){
        int tmp = v[node][i];
        if(!chk[tmp]){
            dfs(tmp);
        }
    }
}
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        for(int j=1;j<=n;j++){
            v[j].clear();
            chk[j]=0;
        }
        for(int j=1;j<=n;j++){
            int x;
            cin >> x;
            v[j].push_back(x);
        }
        int ans=0;
        for(int j=1;j<=n;j++){
            if(!chk[j]){
                dfs(j);
                ans++;
            }
        }
        cout << ans<<'\n';
    }
    return 0;
}