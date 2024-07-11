#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer=0;
    for(int num : array){
        string s = to_string(num);
        answer += count(s.begin(),s.end(),'7');
    }
    
    return answer;
}