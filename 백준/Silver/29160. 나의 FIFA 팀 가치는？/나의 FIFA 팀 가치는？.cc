#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
	vector<priority_queue<int>> v(12);
	int arr[12]={0,};
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[a].push(b);
		if(arr[a]==0)
			arr[a] = 1;
	}
	for(int i=0;i<k;i++){
		for(int j=1;j<=11;j++){
			if(arr[j]==1){
				int x = v[j].top();
				if(x == 1)
					break;
				v[j].pop();
				x--;
				v[j].push(x);
			}
		}
	}	
	int ans=0;
	for(int i=1;i<=11;i++){
		if(arr[i]==1){
			ans += v[i].top();
		}
	}
	cout << ans << '\n';
}