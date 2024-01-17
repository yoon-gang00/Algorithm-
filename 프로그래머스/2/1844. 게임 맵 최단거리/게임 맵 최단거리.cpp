#include<vector>
#include <queue>
#include <iostream>
using namespace std;
int visit[101][101]={0};
int bfs[101][101]={0};
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
queue<pair<int,int>> q;
int solution(vector<vector<int> > maps)
{
    
    int answer = 0;
    int n,m;
    n=maps[0].size();
    m=maps.size();
    q.push(make_pair(0,0));
    visit[0][0]=1;
    bfs[0][0]=1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<0||nx>=m||ny<0||ny>=n)
                continue;
            if(visit[nx][ny])
                continue;
            if(maps[nx][ny]==0)
                continue;
            
            visit[nx][ny]=1;
            q.push(make_pair(nx,ny));
            bfs[nx][ny] = bfs[x][y]+1;
        }
        
    }
    if(!bfs[m-1][n-1])
        answer = -1;
    else
        answer = bfs[m-1][n-1];
    
    return answer;
}