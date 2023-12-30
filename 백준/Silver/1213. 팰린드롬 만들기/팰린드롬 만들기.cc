#include <iostream>
#include <string>
using namespace std;
string s,ans;
int alp[26];
bool check(){
    int cnt=0;
    for(int i=0;i<26;i++)
        if(alp[i]%2==1)
            cnt++;
    return cnt>1;
}
int main(){
    cin >> s;
    for(int i=0;i<s.size();i++){
        alp[s[i]-'A']++;
    }
    if(check())
    {
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<alp[i]/2;j++){
            ans += i + 'A';
        }
    }
    for(int i=0;i<26;i++){
        if(alp[i]%2==1)
            ans += i +'A';
    }
    for(int i=25;i>=0;i--){
        for(int j=0;j<alp[i]/2;j++)
            ans += i + 'A';
    }
    cout << ans << '\n';
}