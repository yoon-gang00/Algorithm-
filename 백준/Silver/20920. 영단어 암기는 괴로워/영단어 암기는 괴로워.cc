#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(pair<int,string> a, pair<int,string> b){
    if(a.first==b.first){
        if(a.second.length() == b.second.length()){
            return a.second < b.second;
        }
        else return a.second.length() > b.second.length();
    }
    else return a.first > b.first;
}
int main(){
    map<string,int> x;
    int n,m;
    cin >> n >> m;
    while(n--){
        string s;
        cin >> s;
        if(s.length()<m)
            continue;
        x[s]++;
    }
    vector<pair<int,string>> v;
    for(auto i:x){
        v.push_back({i.second, i.first});
        
    }
    sort(v.begin(),v.end(),cmp);
    for(auto i: v)
        cout << i.second<<"\n";
}