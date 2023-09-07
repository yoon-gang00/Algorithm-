#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

int solution(vector<vector<int>> board)
{
    int answer =0;
    int dp[1001][1001];
    
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            if(board[i][j]==0)
                dp[i+1][j+1]=0;
            else
                dp[i+1][j+1] = min(min(dp[i][j+1],dp[i+1][j]),dp[i][j])+1;
            answer = max(answer,dp[i+1][j+1]);
        }
        
    }
    
    return (answer)*(answer);
}