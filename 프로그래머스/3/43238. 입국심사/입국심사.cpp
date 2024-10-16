#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long left = 0;
    long long x = *max_element(times.begin(), times.end());
    long long right = (long long)n * x; //최대시간
    
    while(left<=right){
        long long mid = (left+right)/2;
        long long ppl = 0;
        for(int time : times){
            ppl += mid/time;
            if(ppl>=n)
                break;
        }
        if(ppl>=n){
            answer = mid;
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }
    
    return answer;
}