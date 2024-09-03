#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int r, c;
string board[250];
int ocnt = 0, vcnt = 0;
int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};

void bfs(int startR, int startC) {
    int o = 0; // 양의 수
    int v = 0; // 늑대의 수

    // 시작 지점에서 양 또는 늑대를 센다
    if (board[startR][startC] == 'o') o++;
    if (board[startR][startC] == 'v') v++;

    board[startR][startC] = '#'; // 방문 처리
    queue<pair<int, int>> q;
    q.push({startR, startC});

    while (!q.empty()) {
        int currR = q.front().first;
        int currC = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int rr = currR + dr[i];
            int cc = currC + dc[i];

            // 유효한 범위 내에 있고, 아직 방문하지 않은 곳이라면
            if (rr >= 0 && rr < r && cc >= 0 && cc < c && board[rr][cc] != '#') {
                if (board[rr][cc] == 'o') o++;
                if (board[rr][cc] == 'v') v++;
                board[rr][cc] = '#'; // 방문 처리
                q.push({rr, cc});
            }
        }
    }

    // 양과 늑대의 수를 비교
    if (o > v) {
        ocnt += o; // 양이 더 많으면 양의 수를 누적
    } else {
        vcnt += v; // 늑대가 더 많거나 같으면 늑대의 수를 누적
    }
}

int main() {
    cin >> r >> c;
    
    for (int i = 0; i < r; i++) {
        cin >> board[i];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (board[i][j] != '#') {
                bfs(i, j);
            }
        }
    }

    cout << ocnt << ' ' << vcnt;
    return 0;
}
