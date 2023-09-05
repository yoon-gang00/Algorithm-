#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum;
    int mult;
    int A;
    int B;
    mult = brown + yellow;
    sum = brown/2 +2;
    for(int i=brown-1;i>=1;i--){
        B = sum - i;
        A = i;
        if(i*B == mult)
        {
            answer.push_back(A);
            answer.push_back(B);
             return answer;
        }
    }
   
}