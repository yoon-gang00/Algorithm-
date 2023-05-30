#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cpr(pair<int,double> a, pair<int,double> b){
    if(a.second==b.second){
        return a.first < b.first;
    }
    else
        return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer(N);
    vector<int> v(N);
    vector<int> success(N);
    vector<pair<int,double>> tmp(N);
    
    for(int i=0;i<stages.size();i++){
        for(int j=0;j<stages[i] && j<N;j++)
            v[j]++;
        for(int j=0;j<stages[i]-1;j++)
            success[j]++;
    }
    for(int i=0;i<N;i++){
        double fail;
        if(v[i]==0){
            fail =0;
        }
        else
            fail = (v[i]-success[i])/ (double)v[i];
        tmp[i] = make_pair(i+1,fail);
    }
    sort(tmp.begin(),tmp.end(),cpr);
    for(int i=0;i<N;i++){
        answer[i]=tmp[i].first;
    }
    return answer;
}