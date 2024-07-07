#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> v;
    istringstream iss(my_string);
    string s;
    while(iss >> s){
        v.push_back(s);
    }
    
    // 첫 번째 숫자를 처리
    if (!v.empty()) {
        answer = stoi(v[0]);
    }

    // 이후의 숫자와 연산자를 처리
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == "+") {
            if (i + 1 < v.size()) {
                answer += stoi(v[i + 1]);
            }
        } else if (v[i] == "-") {
            if (i + 1 < v.size()) {
                answer -= stoi(v[i + 1]);
            }
        }
    }
    
    return answer;
}