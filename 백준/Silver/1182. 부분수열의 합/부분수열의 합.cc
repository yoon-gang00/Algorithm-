#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,s;
vector<int> v;
int cnt =0;
void sol(int x, int tmp){
    if(x==n){
        return;
    }
    if(tmp+v[x]==s)
        cnt++;
    sol(x+1,tmp);
    sol(x+1,tmp+v[x]);
}
int main(){
    cin >> n >> s;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sol(0,0);
    cout << cnt;
}