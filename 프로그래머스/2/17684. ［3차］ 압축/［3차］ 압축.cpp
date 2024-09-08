#include <string>
#include <vector>
#include <map>
using namespace std;
int num =1;
map<string,int> dic;
void make_dic(){
    for(char c='A';c<='Z';c++){
        string s = "";
        s += c;
        dic[s] = num++;
    }
}
void insert(string s,vector<int> &answer){
    string tmp="";
    for(int i=0;i<s.length();i++){
        tmp += s[i];
        if(dic[tmp]==0){
            dic[tmp] = num++;
            tmp = tmp.substr(0,tmp.length()-1);
            answer.push_back(dic[tmp]);
            tmp="";
            i--;
        }
        
    }
    answer.push_back(dic[tmp]);
}
vector<int> solution(string msg) {
    vector<int> answer;
    make_dic();
    insert(msg,answer);
    return answer;
}