#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,m;
    cin >> n >>m;
    int j;
    cin >> j;
    int l,r;
    l=1;
    int ans=0;
    for(int i=0;i<j;i++){
        r=l+m-1;
        int x;
        cin >> x;
        if(x>=l && x<=r){
            continue;
        }
        if(l>x){
            ans += l-x;
            l=x;
        }
        else if(l<x){
            ans += x-r;
            l+=x-r;
        }
    }
    cout << ans<<"\n";
}