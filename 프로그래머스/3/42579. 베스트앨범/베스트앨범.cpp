#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,int> g_num;
    map<string,map<int,int>> m_num;
    for(int i=0;i<genres.size();i++){
        g_num[genres[i]]+= plays[i];
        m_num[genres[i]][i] = plays[i];
    }
    while(g_num.size()>0){
        string g{};
        int max{0};
        for(auto i : g_num){
            if(max<i.second){
                max = i.second;
                g = i.first;
            }
        }
        for(int i=0;i<2;i++){
            int mmax =0;
            int idx = -1;
            for(auto x : m_num[g]){
                if(mmax<x.second){
                    mmax = x.second;
                    idx = x.first;
                }
            }
            if(idx==-1)
                break;
            answer.push_back(idx);
            m_num[g].erase(idx);
        }
        g_num.erase(g);
    }
    return answer;
}