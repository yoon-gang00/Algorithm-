#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            ans += s[i];
        }
    }
    cout << ans;
}