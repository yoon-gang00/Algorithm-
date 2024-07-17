#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    double a =(double) (dots[0][1]-dots[1][1])/(dots[0][0]-dots[1][0]);
    double b = (double)(dots[2][1]-dots[3][1])/(dots[2][0]-dots[3][0]);
    if(a==b){
        return 1;
    }
    a = (double)(dots[0][1]-dots[2][1])/(dots[0][0]-dots[2][0]);
    b = (double)(dots[1][1]-dots[3][1])/(dots[1][0]-dots[3][0]);
    if(a==b){
        return 1;
    }
    a = (double)(dots[0][1]-dots[3][1])/(dots[0][0]-dots[3][0]);
    b = (double)(dots[1][1]-dots[2][1])/(dots[1][0]-dots[2][0]);
    if(a==b){
        return 1;
    }
    return answer;
}