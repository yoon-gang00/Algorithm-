#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    int groupmin = 1001, onemin=1001;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        groupmin = min(a,groupmin);
        onemin = min(b,onemin);
    }
    int x,y,z;
    if(n%6==0)
        x = (n/6)*groupmin;
    else
        x = (n/6+1)*groupmin;
    
    y = (n/6)*groupmin + (n%6)*onemin;
    
    z = onemin*n;
    
    int ans;
    ans = min(min(x,y),z);
    cout << ans;
    
}