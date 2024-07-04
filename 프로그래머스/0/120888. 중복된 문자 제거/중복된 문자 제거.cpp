#include <string>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> seen; // 등장한 문자를 저장할 집합
    
    for (char c : my_string) {
        if (seen.find(c) == seen.end()) { // 문자가 집합에 없다면
            answer += c; // 결과 문자열에 추가
            seen.insert(c); // 집합에 추가
        }
    }
    return answer;
}