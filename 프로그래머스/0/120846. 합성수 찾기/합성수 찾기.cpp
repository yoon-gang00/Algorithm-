#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x=0;
    int cnt;
    for(int i=2;i<=n;i++){
        cnt =0;
        for(int j=i;j>=1;j--){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt == 2){
            x++;
        }
    }
    answer = n - x-1;
    return answer;
}