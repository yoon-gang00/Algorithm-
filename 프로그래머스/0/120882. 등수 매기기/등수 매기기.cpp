#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> v;
    for(int i=0;i<score.size();i++){
        v.push_back((score[i][0]+score[i][1])/2.0);
    }
    vector<double> sortV = v;
    sort(sortV.begin(),sortV.end(),greater<double>());
    unordered_map<double,int> rankMap;
    int rank =1;
    for(int i=0;i<sortV.size();i++){
        if(rankMap.find(sortV[i])==rankMap.end()){
            rankMap[sortV[i]]=rank;
            rank += count(sortV.begin(),sortV.end(),sortV[i]);
        }
    }
    for(double num : v){
        answer.push_back(rankMap[num]);
    }
    return answer;
}