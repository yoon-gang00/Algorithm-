#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, char> m;
    string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",
				".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                "...","-","..-","...-",".--","-..-","-.--","--.."};
    string st = "";
    stringstream ss(letter);
    char c = 'a';
    for(int i=0;i<26;i++){
        m[arr[i]]=c+i;
    }
    while(ss>>st){
        answer += m[st];
    }
    return answer;
}