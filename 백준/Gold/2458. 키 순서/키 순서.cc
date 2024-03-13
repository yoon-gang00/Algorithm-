//백준 키순서
#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int map[502][502];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			map[i][j]=9876543;
		}
	}
	
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		map[a][b]=1;
	}
	for(int t=1;t<=n;t++){
		for(int x=1;x<=n;x++){
			for(int y=1;y<=n;y++){
				if(map[x][y] > map[x][t]+map[t][y]){
					map[x][y] = map[x][t]+map[t][y];
				}
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		int tmp=0;
		for(int j=1;j<=n;j++){
			if(map[i][j] != 9876543 || map[j][i]!=9876543){
				tmp++;
			}
		}
		if(tmp == n-1)
			ans++;
	}
	cout << ans << "\n";
}