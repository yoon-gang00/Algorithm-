#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >>v[i];
        }
        sort(v.begin(),v.end());
        int ans=0;
        ans = max(ans,v[1]-v[0]);
        ans = max(ans,v[n-1]-v[n-2]);
        for(int i=0;i<n-2;i++){
            ans = max(v[i+2]-v[i],ans);
        }
        cout<< ans << "\n";
    }
}