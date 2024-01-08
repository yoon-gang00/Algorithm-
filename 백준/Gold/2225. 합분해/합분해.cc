#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    long long dp[201][201] = {0, };
    int n,k;
    cin >> n >> k;
    for(int i=0;i<=n;i++){
        dp[1][i]=1;
    }
    for(int i=2;i<=k;i++){
        for(int j=0;j<=n;j++){
            for(int t=0;t<=j;t++){
                dp[i][j] += dp[i-1][t];
            }
            dp[i][j] = dp[i][j] % 1000000000;
        }
    }
    cout << dp[k][n];
}