#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    for(int i=0;i<reserve.size();i++){
        if(find(lost.begin(),lost.end(),reserve[i])!=lost.end()){
            lost.erase(find(lost.begin(),lost.end(),reserve[i]));
            reserve.erase(reserve.begin()+i);
            i--;
        }
    }
    int x = lost.size();
    answer = n-x;
    int test = 2;
    for(int test=0;test<2;test++){
        for(int i=0;i<x;i++){
            auto a = find(reserve.begin(),reserve.end(),lost[i]-1);
            auto b = find(reserve.begin(),reserve.end(),lost[i]+1);
            if(a == reserve.end() && b==reserve.end()){
                continue;
            }
            if(test==0 && a != reserve.end() && b!=reserve.end()){
                continue;
            }
            else if(a!=reserve.end()){
                reserve.erase(a);
                answer++;
            }
            else{
                reserve.erase(b);
                answer++;
            }
        }
    }
    return answer;
}