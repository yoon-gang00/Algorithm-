#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=0;
    for(int i=0;i<s.length();i++){
        n++;
        if(s[i]=='.'){
            n--;
            if(n==2){
                for(int j=1;j<=2;j++){
                    s[i-j]='B';
                }
                n=0;
            }
        }else{
            if(n==4){
                for(int j=0;j<4;j++)
                    s[i-j]='A';
            n=0;
            }
            if(i==s.length()-1){
                if(n==2){
                    for(int j=0;j<2;j++)
                        s[i-j]='B';
                    n=0;
                }
            }
        }
    }
    if(s.find('X') != std::string::npos)
        cout << -1;
    else
        cout << s;
}