#include <iostream>

using namespace std;

int main() {
    int n;
    int dp[11]={0,};
    cin >> n;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        int x = i/2;
        dp[i] = (x*(i-x))+dp[x]+dp[i-x];
    }
    cout << dp[n]<<'\n';
}
