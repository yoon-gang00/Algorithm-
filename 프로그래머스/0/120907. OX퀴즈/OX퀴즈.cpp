#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i=0;i<quiz.size();i++){
        int tmp = 0;
        vector<string> tokens;
        istringstream iss(quiz[i]);
        string token;
        while(iss>>token){
            tokens.push_back(token);
        }
        int a = stoi(tokens[0]);
        int b = stoi(tokens[2]);
        string op = tokens[1];
        int result = stoi(tokens[4]);
        if(op=="+"){
            if(a+b == result){
                answer.push_back("O");
            }
            else{
                answer.push_back("X");
            }
        }
        else if(op=="-"){
            if(a-b == result){
                answer.push_back("O");
            }
            else{
                answer.push_back("X");
            }
        }
    }
    return answer;
}