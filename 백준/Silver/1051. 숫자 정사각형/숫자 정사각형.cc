#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // 최대 변의 길이를 결정
    int max_side;
    if (n > m) {
        max_side = m;
    } else {
        max_side = n;
    }

    vector<vector<int>> v(n, vector<int>(m));

    // 이중 벡터에 입력 받기
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            v[i][j] = s[j] - '0';
        }
    }

    // 가능한 최대 한 변의 길이인 max_side부터 확인, 없으면 1씩 줄이면서 체크
    for (int side_length = max_side; side_length >= 1; side_length--) { // side_length는 정사각형의 변의 길이
        for (int i = 0; i <= n - side_length; i++) { // 행에서 시작점
            for (int j = 0; j <= m - side_length; j++) { // 열에서 시작점
                // (i, j)를 기준으로 side_length * side_length 크기의 정사각형 검사
                if (v[i][j] == v[i][j + side_length - 1] && 
                    v[i][j] == v[i + side_length - 1][j] && 
                    v[i][j] == v[i + side_length - 1][j + side_length - 1]) {
                    cout << side_length * side_length;
                    return 0;
                }
            }
        }
    }

    // 정사각형이 없는 경우 1을 출력
    cout << 1;
    return 0;
}
