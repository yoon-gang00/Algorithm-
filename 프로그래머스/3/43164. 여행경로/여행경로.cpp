#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<string>> v;
vector<string> answer;
bool chk[10001];
bool isAns;
void dfs(string start, int cnt){
    answer.push_back(start);
    if(cnt == v.size()){
        isAns = true;
    }
    for(int i=0;i<v.size();i++){
        if(chk[i])
            continue;
        if(v[i][0]==start){
            chk[i] = true;
            dfs(v[i][1],cnt+1);
            
            if(!isAns){
                answer.pop_back();
                chk[i] = false;
            }
        }
    }
}
vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(),tickets.end());
    v = tickets;
    dfs("ICN", 0);
    return answer;
}