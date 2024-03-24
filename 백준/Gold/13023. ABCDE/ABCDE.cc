//백준 ABCDE 
/*
사람의 수는 node, 관계의 수는 edge로 해석 가능
*/
#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector<vector<int>>v;
vector<bool> visit;
bool arrive;
void dfs(int x,int d){
	if(d==5||arrive){
		arrive = true;
		return;
	}
	visit[x] = true;
	for(int i : v[x]){
		if(!visit[i]){
			dfs(i,d+1);
		}
		
	}
	visit[x]=false;
	
}
int main(){
	cin >> n >> m;
	arrive = false;
	v.resize(n);
	visit = vector<bool>(n,false);
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		dfs(i,1);
		if(arrive)
			break;
	}
	if(arrive){
		cout << 1 << "\n";
	}
	else
		cout << 0 << "\n";
}