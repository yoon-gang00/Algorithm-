#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            pq.push(x);
            if(pq.size()>n){
                pq.pop();
            }
        }
    }
    cout << pq.top();
}