#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int arr[26]={0,};
    for(int i=0;i<s.length();i++){
        int x = s[i] - 'a';
        arr[x]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==1){
            char x = i +'a';
            answer += x;
        }
    }
    return answer;
}