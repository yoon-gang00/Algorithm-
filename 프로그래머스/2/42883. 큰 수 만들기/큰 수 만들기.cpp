#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int idx =0;
    for(int i=0;i<number.size()-k;i++){
        char maxN = number[idx];
        int maxId = idx;
        for(int j=idx;j<=k+i;j++){
            if(maxN<number[j]){
                maxN=number[j];
                maxId = j;
            }
        }
        idx = maxId + 1;
        answer += maxN;
    }
    return answer;
}
