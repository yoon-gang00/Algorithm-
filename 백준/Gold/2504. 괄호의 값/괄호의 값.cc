#include <iostream>
#include <stack>
#include <string>
using namespace std;
string s;
stack<char> st;
int main(){
    cin >> s;
    int ans =0;
    int tmp = 1;
    int sl = s.length();
    for(int i=0;i<sl;i++){
        if(s[i]=='('){
            tmp *= 2;
            st.push('(');
        }
        else if(s[i]=='['){
           tmp *= 3;
           st.push('[');
        }
        else if(s[i]==')'){
           if(st.empty() || st.top()!='('){
               ans = 0;
               break;
           }
           if(s[i-1]=='('){
               ans += tmp;
               tmp/=2;
               st.pop();
           }
            else{
                tmp/=2;
                st.pop();
            }
        }
        else if(s[i]==']'){
           if(st.empty() || st.top()!='['){
               ans = 0;
               break;
           }
           if(s[i-1]=='['){
               ans += tmp;
               tmp/=3;
               st.pop();
           }
            else{
                tmp/=3;
                st.pop();
            }
        }
    }
    
    if(!st.empty()) 
        ans =0;
    cout << ans << "\n";
}