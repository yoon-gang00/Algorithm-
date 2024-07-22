#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int n = common.size();
    if((common[1]-common[0])==(common[2]-common[1])){ //등차수열
        answer = common[n-1] + (common[1]-common[0]);
    }
    else{ //등비 수열
        answer = common[n-1] * (common[1]/common[0]);
    }
    return answer;
}