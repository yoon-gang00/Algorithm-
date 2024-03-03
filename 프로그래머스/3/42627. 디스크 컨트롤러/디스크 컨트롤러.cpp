#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
struct cmp {
    bool operator()(const pair<int,int> &a, const pair<int,int> &b){
        return a.second > b.second;
    }
};
int solution(vector<vector<int>> jobs) {
    int answer = 0;
    sort(jobs.begin(),jobs.end());
    priority_queue<pair<int,int>, vector<pair<int,int>>,cmp> pq;
    int time = 0; 
    int x = 0;
    while(1){
        if(x>=jobs.size() && pq.empty()){
            break;
        }
        while(x<jobs.size() && jobs[x][0] <= time){
            pq.push({jobs[x][0],jobs[x][1]});
            x++;
        }
        if(!pq.empty()){
            answer += (time - pq.top().first + pq.top().second);
            time += pq.top().second;
            pq.pop();
        }
        else{
            time = jobs[x][0];
        }
    }
    answer = answer/jobs.size();
    return answer;
}