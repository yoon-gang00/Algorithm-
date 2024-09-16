#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> slices(n);
    vector<int> v(n);
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        cin >> slices[i];
        q.push({i,slices[i]});
    }
    int ans=0;
    while(!q.empty()){
        auto tmp = q.front();
        q.pop();
        int id = tmp.first;
        int nam = tmp.second;
        
        ans++;
        nam--;
        if(nam>0){
            q.push({id,nam});
        }else{
            v[id] = ans;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}