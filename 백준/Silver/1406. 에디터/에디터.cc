// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
    // Write C++ code here
    stack<char> l,r;
    string s;
    int n;
    cin >> s >> n;
    int len = s.length();
    char* a = &s[0];
    char* a_end = &s[len];
    for(;a!=a_end;a++){
        l.push(*a);
    }
    while(n--){
        char com;
        cin >> com;
        if(com == 'L'){
            if(!l.empty()){
                r.push(l.top());
                l.pop();
            }
        }
        else if(com == 'D'){
            if(!r.empty()){
                l.push(r.top());
                r.pop();
            }
        }
        else if(com =='B'){
            if(!l.empty()){
                l.pop();
            }
        }
        else{
            char c;
            cin >> c;
            l.push(c);
        }
    }
    string ans;
    while(!l.empty()){
        ans += l.top();
        l.pop();
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    while(!r.empty()){
        cout << r.top();
        r.pop();
    }
    cout << "\n";
    return 0;
}