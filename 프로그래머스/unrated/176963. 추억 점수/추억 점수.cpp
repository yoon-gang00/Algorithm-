#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

map<string,int> m;
void set(vector<string> name, vector<int> yearning, int len){
    for(int i=0;i<len;i++){
        m[name[i]]=yearning[i];
    }
}
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int len = name.size();
    set(name,yearning,len);
    int p = photo.size();
    for(int i =0;i<p;i++){
        int num=0;
        for(string na : photo[i]){
            if(m.find(na) != m.end()){
                num += m[na];
            }
        }
        if(num !=0){
            answer.emplace_back(num);
        }
        else{
            answer.emplace_back(0);
        }
    }
    return answer;
}