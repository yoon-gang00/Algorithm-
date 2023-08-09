#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x[3];
    int y[3];
    for(int i=0;i<3;i++){
        x[i]=dots[i][0];
        y[i]=dots[i][1];
    }
    sort(x,x+3);
    sort(y,y+3);
    int a,b;
    a = x[2]-x[0];
    b = y[2]-y[0];
    answer = a*b;
    return answer;
}