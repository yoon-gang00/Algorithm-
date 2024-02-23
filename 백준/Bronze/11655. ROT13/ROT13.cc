#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]+=13;
            if(s[i]>'z'||s[i]<'a'){
                s[i] -= 26;
            }
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            s[i]+= 13;
            if(s[i]>'Z'){
                s[i] -= 26;
            }
        }
        cout << s[i];
    }
}