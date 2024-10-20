#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    long long ans = 1;
    if(s[0]=='c'){
        ans *= 26;
    }else{
        ans*=10;
    }
    for(int i=1;i<s.size();i++){
        if(s[i]=='c'&&s[i-1]=='c'){
            ans *= 25;
        }
        else if(s[i]=='c'&&s[i-1]!='c'){
            ans *= 26;
        }else if(s[i]=='d'&&s[i-1]=='d'){
            ans *= 9;
        }else if(s[i]=='d'&&s[i-1]!='d'){
            ans *= 10;
        }
         ans %= 1000000009;
    }
    cout << ans;
    
}