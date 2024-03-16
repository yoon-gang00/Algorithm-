//백준 음식물 피하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,k;
int map[102][102];
bool visit[102][102];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int x = 1;
void dfs(int b, int a){
	visit[b][a] = 1;
	for(int i=0;i<4;i++){
		int ny=b+dy[i];
		int nx=a+dx[i];
		if(ny<0||nx<0||ny>n||nx>m){
			continue;
		
		}
		if(map[ny][nx] ==1&&visit[ny][nx]==0){
			visit[ny][nx] = 1;
			x++;
			dfs(ny,nx);
		}
	}
}
int main(){
	vector<int> v;
	cin >> n >> m >> k;
	while(k--){
		int r,c;
		cin >> r >> c;
		map[r][c]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(map[i][j]==1 && visit[i][j]==0){
				dfs(i,j);
				v.push_back(x);
				x=1;
			}
		}
	}
	sort(v.begin(),v.end(),greater<int>());
	cout << v[0];
}
