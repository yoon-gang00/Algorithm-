#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int test_case = 1; test_case <= t; test_case++) {
        int n;
        cin >> n;
        cout << "#" << test_case << "\n";

        vector<vector<int>> v(n, vector<int>(n));

        int num = 1;
        int x = 0, y = 0;

        int dir = 0; // 방향: 0(우), 1(하), 2(좌), 3(상)

        while(num <= n * n) {
            v[x][y] = num++;

            // 다음 위치 계산
            if(dir == 0) { // 우측으로 이동
                if(y + 1 < n && v[x][y + 1] == 0) // 우측이 범위 내이고 비어있는 경우
                    y++;
                else { // 범위를 벗어나거나 이미 값이 채워진 경우
                    dir = 1; // 아래로 방향 전환
                    x++;
                }
            } else if(dir == 1) { // 아래로 이동
                if(x + 1 < n && v[x + 1][y] == 0) // 아래가 범위 내이고 비어있는 경우
                    x++;
                else { // 범위를 벗어나거나 이미 값이 채워진 경우
                    dir = 2; // 좌측으로 방향 전환
                    y--;
                }
            } else if(dir == 2) { // 좌측으로 이동
                if(y - 1 >= 0 && v[x][y - 1] == 0) // 좌측이 범위 내이고 비어있는 경우
                    y--;
                else { // 범위를 벗어나거나 이미 값이 채워진 경우
                    dir = 3; // 위로 방향 전환
                    x--;
                }
            } else if(dir == 3) { // 위로 이동
                if(x - 1 >= 0 && v[x - 1][y] == 0) // 위가 범위 내이고 비어있는 경우
                    x--;
                else { // 범위를 벗어나거나 이미 값이 채워진 경우
                    dir = 0; // 우측으로 방향 전환
                    y++;
                }
            }
        }

        // 출력
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
