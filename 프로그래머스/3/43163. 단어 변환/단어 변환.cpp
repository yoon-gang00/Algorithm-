#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int answer=50;
bool visit[50];
bool word(string a, string b){
    int diff=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            diff++;
        }
    }
    if(diff==1){
        return true;
    }
    else{
        return false;
    }
}
void dfs(string begin, string target,vector<string>words,int cnt){
    if(cnt >=answer) return;
    if(begin==target){
        answer=min(answer,cnt);
        return;
    }
    for(int i=0;i<words.size();i++){
        if(word(begin,words[i])&&!visit[i]){
            visit[i]=true;
            dfs(words[i],target,words,cnt+1);
            visit[i]= false;
        }
    }
    return;
}
int solution(string begin, string target, vector<string> words) {
    dfs(begin,target,words,0); 
    if(answer==50)
        return 0;
    return answer;
}