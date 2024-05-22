#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,m;
int parent[51];
vector<int> v[51];
vector<int> ppl;
int find(int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent[x]);
}
void Union(int a,int b){
    a = find(a);
    b = find(b);
    parent[a]=b;
}
int main()
{
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        parent[i] = i;
    }
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        int x;
        cin >> x;
        ppl.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        int c,d;
        for(int j=0;j<x;j++){
            cin >> d;
            v[i].push_back(d);
            if(j==0){
                c = d;
                continue;
            }
            Union(c,d);
            c = d;
        }
    }
    int ans=0;
    if(num ==0){
        cout << m;
    }else{
        for(int i=0;i<m;i++){
            bool chk = true;
            for(int j=0;j<v[i].size();j++){
                int tmp = v[i][j];
                for(int k=0;k<ppl.size();k++){
                    if(find(tmp)==find(ppl[k])){
                        chk = false;
                        break;
                    }
                }
                if(!chk) break;
            }
            if(chk) ans++;
        }
        cout << ans;
    }
    return 0;
}