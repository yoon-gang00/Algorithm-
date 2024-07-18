#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;
bool check(const string& str, const vector<string>& words){
   vector<bool> used(words.size(),false);
    size_t pos = 0;
    while(pos<str.size()){
        bool found = false;
        for(size_t i = 0;i<words.size();i++){
            const string& word = words[i];
            if(!used[i] && str.substr(pos,word.size())==word){
                used[i] = true;
                pos += word.size();
                found = true;
                break;
            }
        }
        if(!found){
            return false;
        }
    }
    return pos == str.size();
}
int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> v={"aya","ye","woo","ma"};
    for(int i=0;i<babbling.size();i++){
        if(check(babbling[i],v)){
            answer++;
        }
    }
    return answer;
}