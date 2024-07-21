#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char sk = '0'+k;
    for(int x = i;x<=j;x++){
        string a = to_string(x);
        for(char c : a){
            if(c==sk){
                answer++;
            }
        }
    }
    return answer;
}