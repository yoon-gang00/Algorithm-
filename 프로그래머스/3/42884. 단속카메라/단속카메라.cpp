#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 1;
    sort(routes.begin(),routes.end()); //진입지점 기준 오름차순
     int tmp = routes[0][1];
    for(int i=1;i<routes.size();i++){
        if(tmp<routes[i][0]){
            answer++;
            tmp = routes[i][1];
        }
        if(tmp>=routes[i][1]){
            tmp = routes[i][1];
        }
    }
    
    return answer;
}