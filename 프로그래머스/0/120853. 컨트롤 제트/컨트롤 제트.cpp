#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    int tmp=0;
    istringstream iss(s);
    string token;
    while(iss>>token){
        if(token=="Z"){
            answer -=tmp;
        }
        else{
            tmp = stoi(token);
            answer += tmp;
        }
    }
    return answer;
}