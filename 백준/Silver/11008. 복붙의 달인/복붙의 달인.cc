
#include <iostream>
#include <string>
using namespace std;
int cntSubstring(const string& str, const string& sub){
    int cnt =0;
    size_t pos = 0;
    while((pos = str.find(sub,pos))!= string::npos){
        ++cnt;
        pos += sub.length();
    }
    return cnt;
}
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string s,p;
        cin >> s >> p;
        int x = cntSubstring(s,p);
        int ans = x+s.length() - p.length()*x;
        cout << ans<<"\n";
    }
}