#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    // str2가 str1에 포함되는지 확인
    if (str1.find(str2) != string::npos) {
        return 1; // 포함되어 있으면 1 반환
    } else {
        return 2; // 포함되어 있지 않으면 2 반환
    }
}
