#include <iostream>
#include <string>
#include <map>
using namespace std;


const int workHours[4] = {4, 6, 4, 10};

int main() {
    int n;
    cin >> n;
    cin.ignore();  // 개행 문자 무시
    
    map<string, int> workTime;  // 각 인원의 총 근무 시간 저장
    
    for (int i = 0; i < n; ++i) {  // 각 주에 대해
        for (int j = 0; j < 4; ++j) {  // 각 날에 대해
            for (int t = 0; t < 7; ++t) {  // 각 시간대에 대해 (7개의 이름 또는 '-')
                string name;
                cin >> name;
                if (name != "-") {  
                    workTime[name] += workHours[j];
                }
            }
        }
    }

    // 공평한 근무 시간인지 확인
    if (workTime.empty()) {
        cout << "Yes" << endl;  // 아무도 근무하지 않을 경우
        return 0;
    }

    // 최소 근무 시간과 최대 근무 시간 찾기
    int minTime = 999999, maxTime = 0;
    for (auto &entry : workTime) {
        minTime = min(minTime, entry.second);
        maxTime = max(maxTime, entry.second);
    }

    // 차이가 12시간 이하인지 확인
    if (maxTime - minTime <= 12) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
