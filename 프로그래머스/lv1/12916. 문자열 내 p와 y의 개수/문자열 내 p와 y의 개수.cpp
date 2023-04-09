#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true; 
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'||s[i]=='P'){
            a++;}
        else if(s[i]=='y'||s[i]=='Y'){
            b++;}
        
        
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << a << b;
    if(a!=b){
        answer = 0;
    }
    return answer;
}