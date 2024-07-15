#include <string>
#include <vector>

using namespace std;
  
void zr(int i,int j,int n, vector<vector<int>>& v){
     for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            int a= i-1+x;
            int b = j-1+y;
            if(a>=0&&a<n&&b>=0&&b<n){
                 v[a][b]=1;
            }
           
        }
    }
}
int solution(vector<vector<int>> board) {
    
    int answer = 0;
    int n = board.size();
  vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                zr(i, j, n, v);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
                answer++;
            }
        }
    }
    return answer;
}