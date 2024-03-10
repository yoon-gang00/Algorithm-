//백준 알파벳
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int x,y,ans=0;
int dr[4]={0,0,-1,1};
int dc[4]={-1,1,0,0};
char graph[20][20]={0, };
bool visit[26]={0, };
void DFS(int r, int c, int cnt){
	ans = max(ans,cnt);
	visit[graph[r][c]-'A'] = 1;
	for(int i=0;i<4;i++){
		int nR = r+dr[i];
		int nC = c+dc[i];
		if(nR<0||nR>=x||nC<0||nC>=y)
			continue;
		int now = graph[nR][nC]-'A';
		if(visit[now]==0){
			DFS(nR,nC,cnt+1);
			visit[now]=0;
		}
	}	
}
int main(){
	cin >> x >> y;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin >> graph[i][j];
		}
	}
	char nextNode = graph[0][0];
	visit[nextNode - 'A'] = true;
	DFS(0,0,1);
	cout <<ans;
}