#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int tmp =0;
    int start =0, end = 0;
    int minlen = 999999999;
    while(end<sequence.size()){
        tmp += sequence[end];
        
        while(tmp>k&&start<=end){
            tmp -= sequence[start];
            start++;
        }
        if(tmp==k){
            if(end - start < minlen){
                minlen = end -start;
                answer = {start, end};  
            }
            
        }
        end++;
    }
    
    return answer;
}