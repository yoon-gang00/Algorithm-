#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int dp[501][501];
    dp[0][0]=triangle[0][0];
    int n = triangle.size()-1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                dp[i][j]=dp[i-1][j];
            }
            else if(j==i){
                dp[i][j]=dp[i-1][j-1];
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
            dp[i][j] += triangle[i][j];
        }
    }
    
    for(int i=0;i<=n;i++){
        if(dp[n][i]>answer){
            answer = dp[n][i];
        }
    }
    return answer;
}