#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    pq.push(v[0].second);
    for(int i=1;i<n;i++){
        if(v[i].first>=pq.top()){
            pq.pop();
            pq.push(v[i].second);
        
        }
        else
            pq.push(v[i].second);
    }
    cout << pq.size();
}