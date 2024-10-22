#include <iostream>
#include <vector>
#include <algorithm> // std::max 사용을 위해
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> l(n); // 잃는 체력
    vector<int> j(n); // 얻는 기쁨
    
    // 입력 받기
    for(int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> j[i];
    }

    // DP 배열 생성: 체력이 최대 100이므로 배열 크기를 101로 설정
    vector<int> dp(101, 0); // 체력별 최대 기쁨 저장

    // DP 진행
    for(int i = 0; i < n; i++) {
        // 체력이 0이 되면 죽으므로, 체력 1 이상일 때만 계산
        // 체력을 아낄 수 있도록 뒤에서부터 진행
        for(int health = 100; health > l[i]; health--) {
            dp[health] = max(dp[health], dp[health - l[i]] + j[i]);
        }
    }

    // 출력: 체력 1 이상 남았을 때 얻을 수 있는 최대 기쁨
    cout << dp[100] << endl;

    return 0;
}
