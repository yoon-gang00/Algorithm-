#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
bool cmp(vector<int>& a, vector<int>& b){
    return a[2] < b[2];
} //a가 b보다 작으면 true, 크면 false return
bool x = false;
bool connect(int a,int b,int n, vector<vector<int>>& nodes){
    vector<bool> visit(n,false);
    queue<int> q;
    q.push(a);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(auto& i : nodes[tmp]){
            if(visit[i])
                continue;
            visit[i]=true;
            q.push(i);
        }
    }
    if(find(visit.begin(),visit.end(),false)==visit.end())
        x = true;
    if(visit[a]&&visit[b])
        return true;
    return false;
}
int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    vector<vector<int>> nodes(n);
    sort(costs.begin(),costs.end(),cmp);
    for(auto& i : costs){
        if(x)
            break;
        if(connect(i[0],i[1],n,nodes))
            continue;
        nodes[i[0]].push_back(i[1]);
        nodes[i[1]].push_back(i[0]);
        answer += i[2];
    }
    return answer;
}