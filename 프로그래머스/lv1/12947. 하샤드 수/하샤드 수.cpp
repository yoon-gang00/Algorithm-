#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int a=0;
    a=x/10000+(x%10000)/1000+(x%1000)/100+(x%100)/10+(x%10);
    if(x%a!=0)
        answer=false;
    return answer;
}