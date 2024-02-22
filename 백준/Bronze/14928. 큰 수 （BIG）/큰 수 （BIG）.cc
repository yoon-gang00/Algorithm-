#include <iostream>
#include <string>
using namespace std;
int n = 20000303;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        int x = s[i]-'0';
        ans = ((ans*10)%n+x)%n;
    }
    cout << ans << "\n";
    return 0;
}