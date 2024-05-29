#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, bool> m;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a == "ChongChong")
        {
            m.insert({a, 1});
        }
        else if (b == "ChongChong")
        {
            m.insert({b, 1});
        }
        if (m[a])
        {
            m[b] = true;
        }
        if (m[b])
        {
            m[a] = true;
        }
    }
    for (auto &x : m)
    {
        if (x.second)
            cnt++;
    }
    cout << cnt;
}
