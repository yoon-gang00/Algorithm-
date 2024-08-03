#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    
    // 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int head_x = 0, head_y = 0;
    bool found = false;

    // 심장의 위치 찾기 (머리 바로 아래)
    for (int i = 1; i < n && !found; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == '*' && v[i-1][j] == '*') {
                head_x = i;
                head_y = j;
                found = true;
                break;
            }
        }
    }
    int heart_x = head_x;
    int heart_y = head_y;

    cout << heart_x + 1 << " " << heart_y + 1 << "\n";

    int arm_l = 0, arm_r = 0;
    int waist = 0;
    int leg_l = 0, leg_r = 0;

    // 왼쪽 팔 길이
    for (int j = heart_y - 1; j >= 0; j--) {
        if (v[heart_x][j] == '*') arm_l++;
        else break;
    }

    // 오른쪽 팔 길이
    for (int j = heart_y + 1; j < n; j++) {
        if (v[heart_x][j] == '*') arm_r++;
        else break;
    }

    // 허리 길이
    for (int i = heart_x + 1; i < n; i++) {
        if (v[i][heart_y] == '*') waist++;
        else break;
    }

    // 왼쪽 다리 길이
    for (int i = heart_x + waist + 1; i < n; i++) {
        if (v[i][heart_y - 1] == '*') leg_l++;
        else break;
    }

    // 오른쪽 다리 길이
    for (int i = heart_x + waist + 1; i < n; i++) {
        if (v[i][heart_y + 1] == '*') leg_r++;
        else break;
    }

    cout << arm_l << " " << arm_r << " " << waist << " " << leg_l << " " << leg_r << "\n";

    return 0;
}
