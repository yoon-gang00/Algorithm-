#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(int N, int number) {
    int answer = -1;
    unordered_set<int> s[8];
    int sum = 0;
    for(int i=0;i<8;i++){
        sum = 10*sum + N;
        s[i].insert(sum);
    }
    for(int i=1;i<8;++i){
        for(int j=0;j<i;++j){
            for(int x : s[j]){
                for(int y : s[i-j-1]){
                    s[i].insert(x+y);
                    s[i].insert(x*y);
                    s[i].insert(x-y);
                    if(y!=0){
                    s[i].insert(x/y);
                }
                }
                
            }
        }
    }
    for(int i=0;i<8;++i){
        if(s[i].find(number)!=s[i].end()){
            answer = i+1;
            break;
        }
    }
    return answer;
}