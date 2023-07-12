#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map <int,int> m;
    for(int i=0;i<tangerine.size();i++){
        m[tangerine[i]]++;
    }
    vector<int> v;
    for(auto j:m){
        v.push_back(j.second);
    }
    sort(v.begin(),v.end(),greater<int>());
    int cnt=0;
    for(int t=0;t<v.size();t++){
        if(cnt>=k){
            break;
        }
        answer++;
        cnt+=v[t];
    }
    return answer;
}