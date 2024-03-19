#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin >> s >>t;
    while(t.length()>s.length()){
        char x = t[t.size()-1];
        t.erase(t.size()-1,1);
        if(x=='B'){
            reverse(t.begin(),t.end());
        }
        if(t==s){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}