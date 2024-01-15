#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);

    int n,k;
    int dp[10001]={0, };
    cin >> n >> k;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=k;i++){
        dp[i]=10001;
    }
    for(int i=1;i<=n;i++){
        for(int j=v[i];j<=k;j++){
            dp[j]=min(dp[j],dp[j-v[i]]+1);
        }
    }
    if(dp[k]==10001)
        cout << -1 << "\n";
    else
        cout << dp[k] << "\n";
}