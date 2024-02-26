#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<long long> v;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    long long ans=0;
    while(m--){
        sort(v.begin(),v.end());
        long long sum = v[0]+v[1];
        v[0]=sum;
        v[1]=sum;
    }
    for(int i=0;i<v.size();i++){
        ans += v[i];
    }
    cout << ans; 
}