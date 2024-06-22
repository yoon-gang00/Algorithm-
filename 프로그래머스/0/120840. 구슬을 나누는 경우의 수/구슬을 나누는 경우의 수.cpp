#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    unsigned long long answer = 0;
    unsigned long long x=1;
    for(int i=1;i<=share;i++){
        x = x*balls/i;
        balls--;
    }
    answer = x;
    return answer;
}