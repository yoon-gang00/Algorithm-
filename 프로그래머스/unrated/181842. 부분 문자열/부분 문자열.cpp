#include <string>
#include <iostream>
#include <vector>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    size_t find = str2.find(str1);
    if(find != string::npos){
       answer=1;
    }
    else{
       answer=0;}
    return answer;
}