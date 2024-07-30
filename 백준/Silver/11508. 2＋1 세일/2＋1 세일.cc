#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans = 0;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if((i+1)%3==0){
            continue;
        }
        else{
            ans += v[i];
        }
    }
    cout << ans;
}