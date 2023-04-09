#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b){
        int t;
        t=a;
        a=b;
        b=t;
    }
    for(int i=a;i<=b;i++){
        answer += i;
    }
    return answer;
}