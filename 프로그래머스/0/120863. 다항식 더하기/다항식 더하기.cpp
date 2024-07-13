#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    istringstream iss(polynomial);
    string tk;
    vector<string> v;
    while(getline(iss,tk,'+')){
        tk.erase(remove(tk.begin(), tk.end(), ' '), tk.end());
        v.push_back(tk);
    }
    int a=0,b=0;
    for(int i=0;i<v.size();i++){
        size_t pos = v[i].find("x");
        if(pos!=string::npos){
            string coefficient = v[i].substr(0,pos);
            if(coefficient.empty()){
                coefficient = "1";
            }else if(coefficient=="-"){
                coefficient ="-1";
            }
            a+=stoi(coefficient);
        }
        else{
            b+=stoi(v[i]);
        }
    }
    if(a==0&&b!=0){
        answer +=to_string(b); 
    }
    else if(a!=0&&b==0){
        if(a==1){
            answer += "x";
        }
        else{
            answer +=to_string(a);
            answer +="x";
        }
        
    }
    else if(a==0&&b==0){
        answer ="0";
    }
    else{
        if(a==1){
            answer += "x + ";
            answer +=to_string(b);
        }else{         
            answer +=to_string(a);
            answer += "x + ";
            answer +=to_string(b);
        }
    }
    return answer;
}