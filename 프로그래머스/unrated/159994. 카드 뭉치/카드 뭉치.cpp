#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    queue<string> q1;
    queue<string> q2;
    for(int i=0;i<cards1.size();i++){
        q1.push(cards1[i]);
    }
    for(int j=0;j<cards2.size();j++){
        q2.push(cards2[j]);
    }
    for(int t=0;t<goal.size();t++){
        if(goal[t]==q1.front())
            q1.pop();
        else if(goal[t]==q2.front())
            q2.pop();
        else{
            answer="No";
            break;
        }
    }
    return answer;
}