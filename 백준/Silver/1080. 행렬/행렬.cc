#include <iostream>
using namespace std;
int a[50][50];
int b[50][50];
int n,m,ans=0;
void solve(int x,int y){
    for(int i=x;i<x+3;++i){
        for(int j=y;j<y+3;++j){
            a[i][j] = 1 - a[i][j];
        }
    }
}
int main(){
    
    cin >> n >> m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           scanf("%1d",&a[i][j]);
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           scanf("%1d",&b[i][j]);
        }
    }
    for(int i=0;i<n-2;++i){
        for(int j=0;j<m-2;++j){
            if(a[i][j] != b[i][j]){
                solve(i,j);
                ans++;
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]!=b[i][j])
                ans = -1;
        }
    }
    
    cout << ans << '\n';
}