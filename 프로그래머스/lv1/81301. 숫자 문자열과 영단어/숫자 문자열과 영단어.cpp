#include <string>
#include <vector>
#include <map>

using namespace std;

map <string,int> m;

int solution(string s) {
    string answer = "";
    m["zero"] =0;
    m["one"]=1;
    m["two"]=2;
    m["three"]=3;
    m["four"]=4;
    m["five"]=5;
    m["six"]=6;
    m["seven"]=7;
    m["eight"]=8;
    m["nine"]=9;
    string st="";
    for(char c:s){
        if(isdigit(c)){
            answer += c;
        }
        else
            st += c;
        if(m.find(st)!=m.end()){
            answer += to_string(m[st]);
            st="";
        }
    }
    return stoi(answer);
}