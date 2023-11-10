#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s = " ";
        getline(cin,s);
        s+=' ';
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << s[i];
            }
            else st.push(s[i]);
        }
    }
}