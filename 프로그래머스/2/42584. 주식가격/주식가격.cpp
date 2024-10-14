#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n,0);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            answer[i]++;
            if(prices[i]>prices[j]){
                break;
            }
        }
    }
    return answer;
}