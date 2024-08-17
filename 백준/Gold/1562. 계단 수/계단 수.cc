#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000000;

int main() {
    int n;
    cin >> n;

    // dp[pos][digit][mask]
    vector<vector<vector<long long>>> dp(n + 1, vector<vector<long long>>(10, vector<long long>(1024, 0)));

    // 초기 조건: 1자리 수는 그 자체로 계단수
    for (int digit = 1; digit <= 9; digit++) {
        dp[1][digit][1 << digit] = 1;
    }

    // DP 상태 전이
    for (int pos = 1; pos < n; pos++) {
        for (int digit = 0; digit <= 9; digit++) {
            for (int mask = 0; mask < 1024; mask++) {
                if (dp[pos][digit][mask] == 0) continue;

                // 다음 자리수
                if (digit > 0) { // digit-1로 이동 가능
                    int next_digit = digit - 1;
                    dp[pos + 1][next_digit][mask | (1 << next_digit)] += dp[pos][digit][mask];
                    dp[pos + 1][next_digit][mask | (1 << next_digit)] %= MOD;
                }
                if (digit < 9) { // digit+1로 이동 가능
                    int next_digit = digit + 1;
                    dp[pos + 1][next_digit][mask | (1 << next_digit)] += dp[pos][digit][mask];
                    dp[pos + 1][next_digit][mask | (1 << next_digit)] %= MOD;
                }
            }
        }
    }

    // 최종 결과 계산
    long long result = 0;
    int full_mask = (1 << 10) - 1; // 1111111111, 즉 0~9까지 모두 사용한 상태
    for (int digit = 0; digit <= 9; digit++) {
        result += dp[n][digit][full_mask];
        result %= MOD;
    }

    cout << result << endl;

    return 0;
}
