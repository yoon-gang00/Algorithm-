#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            answer.push_back(i*2+1);
        }
    }else{
        for(int i=0;i<n/2+1;i++){
            answer.push_back(i*2+1);
        }
    }
    
    return answer;
}