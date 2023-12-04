#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        list<char> l = {};
        auto cursor = l.begin();
        string s;
        cin >> s;
        for(auto i : s){
            if(i == '<'){
                if(cursor != l.begin()){
                    cursor--;
                }
            }
            else if(i=='>'){
                if(cursor != l.end()){
                    cursor++;
                }
            }
            else if(i=='-'){
                if(cursor != l.begin()){
                    cursor--;
                    cursor = l.erase(cursor);
                }
            }
            else{
                l.insert(cursor,i);
            }
        }
        for(auto i : l){
            cout << i;
        }
        cout << '\n';
    }
    return 0;
}