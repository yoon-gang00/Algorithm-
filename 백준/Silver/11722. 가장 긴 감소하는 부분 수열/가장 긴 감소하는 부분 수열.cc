#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[1001]={0, };
    int dp[1001]={0, };
    int ans =0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<=i;j++){
            if(arr[i]<arr[j] && dp[j]+1>dp[i]){
                dp[i] = dp[j]+1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(dp[i]>ans){
            ans = dp[i];
        }
    }
    cout << ans << "\n";
}