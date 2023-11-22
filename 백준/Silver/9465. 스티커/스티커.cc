#include <iostream>
using namespace std;
int dp[2][100001]={0, };
int arr[2][100001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        int ans =0;
        for(int i=0;i<2;i++){
            for(int j=1;j<=n;j++){
                cin >> arr[i][j];
            }
        }
        dp[0][0] = dp[1][0] = 0;
        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];
        for(int i=2;i<=n;i++){
            dp[0][i]=max(dp[1][i-1],dp[1][i-2]) + arr[0][i];
            dp[1][i]=max(dp[0][i-1],dp[0][i-2]) + arr[1][i];
        }
        ans = max(dp[0][n],dp[1][n]);
        cout << ans << "\n";
        t--;
    }
}