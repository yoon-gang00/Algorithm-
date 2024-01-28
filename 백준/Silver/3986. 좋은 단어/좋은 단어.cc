#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans =0;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int l = s.length();
        stack<char> st;
        for(int j=0;j<l;j++){
            if(!st.empty()&&st.top()==s[j])
            {
                st.pop();
                continue;
            }
            st.push(s[j]);
        }
        if(st.empty())
            ans++;
    }
    cout << ans << "\n";
}