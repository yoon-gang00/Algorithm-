#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int dp[1000];
    int arr[1000];
    int num, result =1;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> arr[i];
        dp[i]=1;
    }
    for(int i=1;i<num;i++){
        int ma =0;
        int idx=i;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                if(dp[j]>ma)
                    ma =dp[j];
            }
        }
        dp[i] += ma;
        result = max(result,dp[i]);
    }
    cout << result;
    return 0;
}