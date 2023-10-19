#include <iostream>
using namespace std;
int main(){
    int ans=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1])
            ans++;
    }
    if(ans==0)
        cout << ans;
    else cout << ans/2;
}