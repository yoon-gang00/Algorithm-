#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct{
    int x;
    int gold;
    int silver;
    int bronze;
    int rank;
}con;
bool compare(con a, con b){
    if(a.gold==b.gold){
        if(a.silver==b.silver)
            return a.bronze>b.bronze;
        else return a.silver > b.silver;
    }
    else return a.gold > b.gold;
}
int main(){
    int n,k;
    cin >> n>>k;
    int ans=0;
    vector<con> v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i].x>>v[i].gold >> v[i].silver >> v[i].bronze;
    }
    sort(v.begin()+1,v.end(),compare);
    int tmp=1;
    for(int i=1;i<=n;i++){
        if(v[i].gold==v[i-1].gold && v[i].silver==v[i-1].silver && v[i].bronze==v[i-1].bronze)
            v[i].rank = tmp;
        
        else{
            tmp = i;
            v[i].rank = i;
        }
        if(v[i].x==k){
            
            ans = v[i].rank;
            break;
        }
        
    }
    cout << ans;
}