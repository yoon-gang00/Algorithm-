#include <iostream>
#include <string>
using namespace std;
int main(){
    int a, b;
    int cnt=1;
    string s;
    cin >> a >> b;
    s = to_string(b);
    while(1){
        if(s[s.length()-1]=='1'){
            cnt++;
            s=s.substr(0,s.length()-1);
            b=stoi(s);
        }
        else if(b%2==0){
            cnt++;
            b=b/2;
            s=to_string(b);
        }
        else if(b%2==1){
            cnt =-1;
            break;
        }
        if(a==b){
            break;
        }
        else if(a>b){
            cnt = -1;
            break;
        }
    }
    cout << cnt;
}