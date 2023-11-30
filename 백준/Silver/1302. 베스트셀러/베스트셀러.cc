#include <bits/stdc++.h>
using namespace std;

int main(){
    map <string,int> m;
    int n, tmp ;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto p : m) tmp = max(tmp, p.second);
    for(auto p : m){
        if(p.second == tmp){
            cout << p.first; 
            return 0;
        }
    }
    
}