#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int k, m;
        cin >> s;
        cin >> k >> m;
        string com(s.length(), '1');
        int cnt = 0;
        for (int j = 0; j < s.length() - k + 1; j++)
        {
            if (s[j] == '0')
            {
                for (int t = 0; t < k; t++)
                {
                    if (s[j + t] == '1')
                    {
                        s[j + t] = '0';
                    }
                    else
                    {
                        s[j + t] = '1';
                    }
                }
                cnt++;
            }
            if (com == s)
            {
                break;
            }
        }
        if (com != s)
        {
            cout << "#" << i + 1 << " -1" << "\n";
        }
        else
        {
            cout << "#" << i + 1 << " " << cnt << "\n";
        }
        cnt = 0;
    }
    return 0;
}
