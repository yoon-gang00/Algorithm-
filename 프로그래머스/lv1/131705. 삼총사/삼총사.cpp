#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for(int i=0;i<number.size();i++){
        for(int t=i+1;t<number.size();t++){
            for(int j=t+1;j<number.size();j++){
                if(number[i]+number[t]+number[j]==0){
                    answer++;
                }
            }
        }
    }
    return answer;
}