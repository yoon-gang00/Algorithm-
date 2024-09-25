#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    vector<int> dp(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
        dp[i] = v[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=1;j<i;j++){
            dp[i] = min(dp[i],dp[j]+v[i-j]);
        }
    }
    cout << dp[n];
    
}