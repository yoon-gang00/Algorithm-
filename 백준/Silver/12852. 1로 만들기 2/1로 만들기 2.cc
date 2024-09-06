#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1,0);
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] +1;
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
    }
    cout << dp[n] << '\n';
    vector<int> v;
    while(n>0){
        v.push_back(n);
        if(n%3==0&&dp[n]==dp[n/3]+1){
            n/=3;
        }
        else if(n%2 ==0 && dp[n]==dp[n/2]+1){
            n/=2;
        }else{
            n-=1;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}