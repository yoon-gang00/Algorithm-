#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
priority_queue<int,vector<int>,greater<int>> min_pq;
priority_queue<int,vector<int>> max_pq;
int cnt=0;
    
void operation(string s){
    if(s[0]=='I'){
        string tmp = s.substr(2);
        int n = stoi(tmp);
        min_pq.push(n);
        max_pq.push(n);
        cnt++;
    }
    else if(s[0]=='D'){
        if(cnt<=0)
            return;
        if(s[2]=='1'){
            max_pq.pop();
            cnt--;
        }
        else{
            min_pq.pop();
            cnt--;
        }
        if(cnt==0){
            min_pq = priority_queue<int,vector<int>,greater<int>>();
            max_pq = priority_queue<int,vector<int>>();
        }
    }
}

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    for(string x : operations){
        operation(x);
    }
    if(cnt == 0){
        return {0,0};
    }
    else{
        return {max_pq.top(),min_pq.top()};
    }
    return answer;
}