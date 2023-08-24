#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    unsigned int x;
    x = (total-num*(num-1)/2)/num;
    for(int i=0;i<num;i++){
        answer.push_back(x);
        x++;
    }
    return answer;
}