#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(int a, int b) {
    return a > b;
}
int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(),score.end(),comp);
    for(int i=1;i<=score.size()/m;i++){
        answer+= score[i*m-1]*m;
    }
    return answer;
}