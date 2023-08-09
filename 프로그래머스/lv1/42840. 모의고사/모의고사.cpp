#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector <int>> m_test {{1,2,3,4,5},{2,1,2,3,2,4,2,5},{3,3,1,1,2,2,4,4,5,5}};
    vector<int> cnt = {0,0,0};
    for(int i=0;i<answers.size();i++){
        if(answers[i]==m_test[0][i%m_test[0].size()]) cnt[0]++;
        if(answers[i]==m_test[1][i%m_test[1].size()]) cnt[1]++;
        if(answers[i]==m_test[2][i%m_test[2].size()]) cnt[2]++;
    }
    
    int max;
    max = *max_element(cnt.begin(),cnt.end());
    for(int i=0;i<3;i++){
        if(max == cnt[i])
            answer.push_back(i+1);
    }
    return answer;
}