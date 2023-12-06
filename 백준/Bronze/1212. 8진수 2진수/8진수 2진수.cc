#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t;
    for(int i=0;i<s.size();i++){
        switch(s[i]){
            case '0':
                if(i==0){
                    t += "0";
                    break;
                }
                else{
                    t+="000";
                    break;
                }
            case '1':
                if(i==0){
                    t+="1";
                    break;
                }
                else{
                    t+="001";
                    break;
                }
            case '2':
                if(i==0){
                    t+="10";
                    break;
                }
                else{
                    t+="010";
                    break;
                }
            case '3':
                if(i==0){
                    t+="11";
                    break;
                }
                else{
                    t+="011";
                    break;
                }
            case'4':
                t+="100";
                break;
            case '5':
                t+="101";
                break;
            case '6':
                t+="110";
                break;
            case '7':
                t+="111";
                break;
                   
        }
    }
    cout << t;
}