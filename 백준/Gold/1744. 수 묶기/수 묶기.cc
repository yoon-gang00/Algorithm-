#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector<int> pl;
    vector<int> mi;
    
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a>0)
            pl.push_back(a);
        else
            mi.push_back(a);
    }
    int pl_s = pl.size()-1;
    int mi_s = mi.size()-1;
    sort(pl.rbegin(),pl.rend());
    sort(mi.begin(),mi.end());
    int ans =0;
    if(pl.size()%2==1){
        for(int i=0;i<pl_s;i+=2){
            if(pl[i]==1||pl[i+1]==1){
                ans += pl[i]+pl[i+1];
            }
            else ans += pl[i]*pl[i+1];
        }
        ans += pl[pl_s];
    }
    else{
        for(int i=0;i<pl_s;i+=2){
            if(pl[i]==1||pl[i+1]==1){
                 ans += pl[i]+pl[i+1];
            }
            else ans += pl[i]*pl[i+1];
        }
    }
    
    if(mi.size()%2==1){
        for(int i=0;i<mi_s;i+=2){
            ans += mi[i] * mi[i+1];
        }
        ans += mi[mi_s];
    }
    else{
        for(int i=0;i<mi_s;i+=2)
            ans += mi[i]*mi[i+1];
    }
    cout << ans; 
}