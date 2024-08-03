#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, p;
    char game; // 윷놀이 Y 2명, 같은 그림 찾기 F 3명, 원카드 O 4명
    cin >> n >> game;
    if (game == 'Y')
    {
        p = 2;
    }
    else if (game == 'F')
    {
        p = 3;
    }
    else if (game == 'O')
    {
        p = 4;
    }
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    int x = v.size();
    cout << x / (p - 1);
}