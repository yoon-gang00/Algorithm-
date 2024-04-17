
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans=9999999;
    int rgb[1001][3];
    int dp[1001][3];
    for(int i=1;i<=n;i++){
        cin >> rgb[i][0]>>rgb[i][1]>>rgb[i][2];
    }
    for(int x=0;x<3;x++){
        for(int i=0;i<3;i++){
            if(i==x){
                dp[1][i]=rgb[1][i];
            }
            else
                dp[1][i]= 999999999;
        }
        for(int i=2;i<=n;i++){
            dp[i][0] = min(dp[i-1][1],dp[i-1][2])+rgb[i][0];
            dp[i][1] = min(dp[i-1][0],dp[i-1][2])+rgb[i][1];
            dp[i][2] = min(dp[i-1][0],dp[i-1][1])+rgb[i][2];
        }
        for(int i=0;i<=2;i++){
            if(i==x) continue;
            else ans = min(ans,dp[n][i]);
        }
    }
    cout << ans;
}