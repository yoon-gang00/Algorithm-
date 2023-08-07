#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    for(int x : scoville){
        q.push(x);
    }
    int cnt=0;
    while(!q.empty()){
        int a = q.top();
        if(a>=K)
            return cnt;
        cnt ++;
        q.pop();
        if(q.empty())
            return -1;
        int b = q.top();
        q.pop();
        a=a+2*b;
        q.push(a);
    }
    return cnt;
}