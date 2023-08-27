#include <string>
#include <vector>
#include <queue>

using namespace std;

struct process {
    int pri;
    int idx;
};
int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<process> q;
    priority_queue<int> pq;
    for(int i=0;i<priorities.size();i++){
        q.push({priorities[i],i});
        pq.push(priorities[i]);
    }
    while(!q.empty()){
        if(q.front().pri==pq.top()){
            answer++;
            if(q.front().idx==location)
                break;
            q.pop();
            pq.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
    return answer;
}