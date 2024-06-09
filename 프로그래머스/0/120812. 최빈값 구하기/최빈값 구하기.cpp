#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int cnt[1001]={0};
    int maxN=0;
    for(int i=0;i<array.size();i++){
        cnt[array[i]]++;
        if(cnt[array[i]]>maxN){
            maxN = cnt[array[i]];
            answer = array[i];
        }
    }
    
    int tmp =0;
    for(int i=0;i<1001;i++){
        if(cnt[i]==maxN){
            tmp++;
        }
        if(tmp>1){
            return -1;
        }
    }
    return answer;
}