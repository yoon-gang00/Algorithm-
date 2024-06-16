#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string(age);
    for(int i=0;i<str.size();i++){
        char x = str[i];
        if(x=='0'){
        answer+="a";
    }
    else if(x=='1'){
        answer+="b";
    }
    else if(x=='2'){
        answer+="c";
    }
    else if(x=='3'){
        answer+="d";
    }else if(x=='4'){
        answer+="e";
    }
    else if(x=='5'){
         answer+="f";
    }
    else if(x=='6'){
         answer+="g";
    }else if(x=='7'){
         answer+="h";
    }
    else if(x=='8'){
         answer+="i";
    }
    else if(x=='9'){
         answer+="j";
    }
    }
    
    return answer;
}