#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int> v;
    for(int i=0;i<my_string.size();i++){
        if(isdigit(my_string[i])){
            v.push_back(my_string[i]-'0');
        }
    }
    for(int i=0;i<v.size();i++){
        answer += v[i];
    }
    return answer;
}