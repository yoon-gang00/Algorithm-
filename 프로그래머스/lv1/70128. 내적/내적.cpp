#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 1234567890;
    int x=0;
    for(int i=0;i<a.size();i++){
        x += a[i]*b[i];
    }
    answer =x;
    return answer;
}