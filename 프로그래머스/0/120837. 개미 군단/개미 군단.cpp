#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    answer += hp/5;
    hp =hp- answer*5;
    answer += hp/3;
    hp = hp - (hp/3)*3;
    answer += hp;
    return answer;
}