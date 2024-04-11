#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int max = s.length();
    int ans=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='S'){
            ans++;
        }
        else if(s[i]=='L'){
            ans++;
            i++;
        }
    }
    if(max<ans){
        cout << max;
    }
    else
        cout << ans;
}