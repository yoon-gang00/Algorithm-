#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int dp[101][101];
for(int i=1;i<=100;i++){
    for(int j=1;j<=100;j++){
        dp[i][j]=-1;
    }
}
   for(int i=0;i<puddles.size();i++){
       dp[puddles[i][0]][puddles[i][1]]=0;
   }
    dp[1][1]=1;
    
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(dp[i][j]==-1){
                if(i==1&&j==1)
                    continue;
                else if(i==1)
                    dp[i][j]=dp[i][j-1]%1000000007;
                else if(j==1)
                    dp[i][j]=dp[i-1][j]%1000000007;
                else
                    dp[i][j]=(dp[i][j-1]+dp[i-1][j])%1000000007;
            }
            
        }
    }
    answer = dp[m][n];
    return answer;
}