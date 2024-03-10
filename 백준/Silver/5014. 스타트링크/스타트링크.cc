//백준 스타트링크 5014
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int f,s,g,u,d;
int main(){
	cin >> f >> s >> g >> u >> d;
	//건물 높이, 현재 위치, 목적지, up, down
	queue<int> q;
	vector<bool> visit(f+1, 0);
	q.push(s);
	int cnt = 0;
	visit[s] = 1;
	while(!q.empty()){
		int n = q.size();
		while(n--){
			int x = q.front();
			if(x==g){
				cout << cnt;
				return 0;
			}
			q.pop();
			int up = u + x;
			int down = x - d;
			if(up<=f && !visit[up]){
				q.push(up);
				visit[up] = true;
			}
			if(down>=1 && !visit[down]){
				q.push(down);
				visit[down] = true;
			}
		}
		cnt++;
	}
	cout << "use the stairs";
}