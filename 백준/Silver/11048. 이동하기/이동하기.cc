#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>>v(n+1,vector<int>(m+1,0));
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> v[i][j];
            dp[i][j]=v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j] = v[i][j] + max(dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j]));
        }
    }
    cout << dp[n][m] << '\n';
}