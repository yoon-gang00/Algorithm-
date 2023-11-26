#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int arr[1001]={0, };
    int dp[1001]={0, };
    int ans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(arr[j]<arr[i]){
                dp[i]=max(dp[i],dp[j]);
            }
        }
        dp[i]+=arr[i];
        ans = max(dp[i],ans);
    }
    cout << ans;
}