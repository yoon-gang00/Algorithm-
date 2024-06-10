#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    int x=6*n;
    for(int i=6;i>0;i--){
        if(6%i==0&&n%i==0){
            x=x/i;
            break;
        }
    }
    answer= x/6;
    return answer;
}