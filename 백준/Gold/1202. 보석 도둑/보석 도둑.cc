#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n,k;
priority_queue<int,vector<int>,less<int>> pq;
int p;
vector<pair<int,int>> info;
vector<int> bag;
int solve(int index){
    while(p<n&&info[p].first <= bag[index]){
        pq.push(info[p++].second);
    }
    if(pq.empty()){
        return 0;
    }
    else{
        int tmp = pq.top();
        pq.pop();
        return tmp;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        info.push_back({a,b});
    }
    for(int i=0;i<k;i++){
        cin >> c;
        bag.push_back(c);
    }
    sort(info.begin(),info.end());
    sort(bag.begin(),bag.end());
    long long ans =0;
    for(int i=0;i<k;i++){
        ans += (long long)solve(i);
    }
    cout << ans;
    return 0;
}