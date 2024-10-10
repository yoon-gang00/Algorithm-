#include <string>
#include <vector>
#include <functional>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> m;
    for(auto ppl : participant){
        if(m.find(ppl)==m.end()){ //값이 없는경우 새로 추가
            m[ppl] = 1;
        }else{
            m[ppl]++;
        }
    }
    for(auto ppl : completion){
        m[ppl]--;
    }
    for(auto ppl : participant){
        if(m[ppl]>0){
            answer = ppl;
            break;
        }
    }
    return answer;
}