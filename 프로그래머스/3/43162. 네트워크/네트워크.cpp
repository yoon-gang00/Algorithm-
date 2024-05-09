#include <string>
#include <vector>
using namespace std;
int chk[200];
void dfs(int i,int n,vector<vector<int>> computers){
    chk[i]=1;
    for(int j=0;j<n;j++){
        if(chk[j]==0&&computers[i][j]==1){
            dfs(j,n,computers);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0;i<n;i++){
        if(chk[i]==0){
            dfs(i,n,computers);
            answer++;
        }
    }
    return answer;
}