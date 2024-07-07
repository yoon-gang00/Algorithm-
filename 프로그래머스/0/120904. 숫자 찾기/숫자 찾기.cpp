#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string s = to_string(num);
    
    for(int i=0;i<s.length();i++){
        if(k+'0' == s[i]){
            answer = i+1;
            break;
        } 
    }
    return answer;
}