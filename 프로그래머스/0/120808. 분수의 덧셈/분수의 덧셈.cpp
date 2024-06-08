#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int x = denom1*denom2; //분모
    int y = numer1*denom2 + numer2*denom1; //분자
    int max;
    if(x>y){
        max = x;
    }else{
        max = y;
    }
    for(int i=max;i>=1;i--){
        if(x%i==0&&y%i==0){
            x= x/i;
            y= y/i;
        }
    }
    answer.push_back(y);
    answer.push_back(x);
    return answer;
}