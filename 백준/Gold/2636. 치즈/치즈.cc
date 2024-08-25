#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

char g[100][100];
bool chk[100][100];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int result = 0, t = 0;

bool bfs(int a, int b) // a와 b를 매개변수로 추가
{
    chk[0][0] = 1;
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push({0, 0});
    t++;
    while (!q.empty())
    {
        int A = q.front().first;
        int B = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int cA = A + dir[i][0];
            int cB = B + dir[i][1];
            if (cA >= 0 && cA < a && cB >= 0 && cB < b && !chk[cA][cB]) // a와 b로 탐색 범위를 설정
            {
                if (g[cA][cB] == '0')
                {
                    q.push({cA, cB});
                }
                else
                {
                    g[cA][cB] = '0';
                    cnt++;
                }
                chk[cA][cB] = 1;
            }
        }
    }
    if (cnt == 0)
    {
        cout << --t << '\n' << result;
        return true;
    }
    else
    {
        result = cnt;
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b; // 가로 세로 입력
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> g[i][j];
        }
    }
    while (1)
    {
        if (bfs(a, b)) // bfs 호출 시 a와 b 전달
            break;
        memset(chk, 0, sizeof(chk));
    }
    return 0;
}
