#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    vector<int> v;
    cin >> n;
    cin >> m;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int x=0;
    int y=1;
    int ans=0;
    sort(v.begin(),v.end());
    while(x<=y && y<n){
        if(v[x]+v[y]==m)
            ans++;
        if(y==n-1){
            x++;
            y = x+1;
        }
        else
            y++;
        
    }
    cout << ans;
}