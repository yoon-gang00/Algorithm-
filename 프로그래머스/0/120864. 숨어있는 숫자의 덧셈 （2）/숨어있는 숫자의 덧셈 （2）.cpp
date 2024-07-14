#include <string>
#include <vector>
#include <cctype>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int cur_n = 0;
    bool isNum = false;
    for(char ch: my_string){
        if(isdigit(ch)){
            cur_n = cur_n*10+ (ch-'0');
            isNum = 1;
        }
        else{
            if(isNum){
                answer += cur_n;
                cur_n = 0;
                isNum = 0;
            }
        }
    }
    if(isNum){
        answer+=cur_n;
    }
    return answer;
}