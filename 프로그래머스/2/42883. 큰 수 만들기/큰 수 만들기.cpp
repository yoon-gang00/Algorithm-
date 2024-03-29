#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int max =0;
    int idx=0;
    for(int i=0;i<number.length();i++){
        if(max<number[i]){
            max=number[i];
            idx=i;
        }
        if(i==k){
            i = idx;
            ++k;
            answer.push_back(max);
            max=0;
        }
    }
    return answer;
}