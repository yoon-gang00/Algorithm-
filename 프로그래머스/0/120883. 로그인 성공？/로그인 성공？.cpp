#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    string input_id = id_pw[0];
    string input_pw = id_pw[1];
    for(vector<string> account : db){
        string db_id = account[0];
        string db_pw = account[1];
        if(input_id==db_id){
            if(input_pw==db_pw){
                return "login";
            }
            else{
                return "wrong pw";
            }
        }
    }
    return "fail";
}