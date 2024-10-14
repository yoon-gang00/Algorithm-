#include <string>
#include <vector>
#include <stack>
using namespace std;
//stack사용해서 풀어보기
vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n,0);
    stack<int> s;
    for(int i = 0;i<n;i++){
        while(!s.empty() && prices[s.top()]>prices[i]){
            int top = s.top();
            s.pop();
            answer[top] = i - top;
        }
        s.push(i);
    }
    while(!s.empty()){
        int top = s.top();
        s.pop();
        answer[top] = n-1-top;
    }
    return answer;
}


/* 시간복잡도 O(n^2)
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
*/