//백준 신기한 소수
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
bool isPrime(int x){
	for(int i=2;i<=x/2;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
void DFS(int a,int k){
	if(k==n){
		if(isPrime(a)){
			cout << a << "\n";
		}
		return;
	}
	for(int i=1;i<10;i++){
		if(i%2==0)
			continue;
		if(isPrime(a*10+i)){
			DFS(a*10+i,k+1);
		}
	}
	
}

int main(){
	cin >> n;
	DFS(2,1);
	DFS(3,1);
	DFS(5,1);
	DFS(7,1);
}