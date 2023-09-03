#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    for(auto c : score){
        v.push_back(c);
        sort(v.begin(),v.end());
        if(v.size()>k){
            v.erase(v.begin());
        }
        answer.push_back(*v.begin());
    }
    return answer;
}