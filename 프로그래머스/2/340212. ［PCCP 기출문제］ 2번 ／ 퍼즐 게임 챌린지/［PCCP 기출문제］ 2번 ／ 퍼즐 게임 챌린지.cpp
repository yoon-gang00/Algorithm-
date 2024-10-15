#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool chk(int level, vector<int>& diffs, vector<int>& times, long long limit){
    long long cur = 0;
    long long prev = 0;
    for(int i=0;i<diffs.size();i++){
        if(level >= diffs[i]){
            cur += times[i];
        }
        else{
            long long tmp = diffs[i]-level;
            cur += times[i] + (times[i]+prev)*tmp;
        }
        prev = times[i];
        if(cur > limit){
            return false;
        }
        
    }
    return true;
}
int solution(vector<int> diffs, vector<int> times, long long limit) {
    int l = 1;
    int r = 200000;
    int answer = 999999999;
    while(l<=r){
        int mid = (l+r)/2;
        if(chk(mid,diffs,times,limit)){
            r = mid - 1;
            answer = min(mid, answer);
        }else{
            l = mid + 1;
        }
    }
    return answer;
}