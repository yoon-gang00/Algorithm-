#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    for(int i =0;i<my_str.length()/n;i++){
        answer.push_back(my_str.substr(i*n,n));
    }
    if(my_str.length()%n!=0){
        int x = (my_str.length()/n);
        answer.push_back(my_str.substr(n*x));
    }
    return answer;
}