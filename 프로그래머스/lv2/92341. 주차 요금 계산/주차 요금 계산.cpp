#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;
int timedif(string in, string out){
    int sh = stoi(in.substr(0,2));
    int eh = stoi(out.substr(0,2));
    int sm = stoi(in.substr(3,2));
    int em = stoi(out.substr(3,2));
    int dif = abs((eh-sh)*60 + em-sm);
    return dif;
}
vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string,vector<string>> in;
    map<string, int> useTime;
    for(string record: records){
        stringstream ss(record);
        string time, car, info;
        ss >> time >> car >> info;
        if(info == "IN") in[car].push_back(time);
        else{
            string in_time = in[car].back();
            in[car].pop_back();
            int time_use = timedif(time, in_time);
            useTime[car] += time_use;
        }
    }
    for(auto it: in){
        if(!in[it.first].empty())
            useTime[it.first] += timedif("23:59",in[it.first].back());
    }
    for(auto it : useTime){
        if(useTime[it.first]<=fees[0])
            answer.push_back(fees[1]);
        else
            answer.push_back(fees[1]+ceil((double)(useTime[it.first]-fees[0])/fees[2])*fees[3]);
    }
    return answer;
}