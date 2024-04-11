#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans=0;
    sort(v.begin()+1,v.end(),greater<int>());
    while(v[0]<=v[1]){
        v[1]--;
        v[0]++;
        ans++;
        sort(v.begin()+1,v.end(),greater<int>());
    }
    cout << ans;
}