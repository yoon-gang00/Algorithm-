#include <string>
#include <vector>

using namespace std;
bool check(int b){
    if(b==0){
        return 0;
    }
    while(b%2==0){
        b/=2;
    }
    while(b%5==0){
        b/=5;
    }
    return b==1;
}
int solution(int a, int b) {
    int answer = 0;
    for(int i=a;i>=2;i--){
        if(a%i==0&&b%i==0){
            a = a/i;
            b = b/i;
        }
    }
    if(check(b)){
        answer=1;
    }
    else{
        answer=2;
    }
    return answer;
}