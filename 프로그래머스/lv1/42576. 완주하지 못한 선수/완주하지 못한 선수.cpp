#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> map;
    for(auto i : participant){
        if(map.end()==map.find(i)){
            map.insert(make_pair(i,1));
        }
        else
            map[i]++;
        
    }
    for(auto i : completion)
        map[i]--;
    
    for(auto i : participant)
        if(map[i]>0){
            answer = i;
            break;
        }
    return answer;
}