#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    string ans = "";
    string tmp;
    cin >> s;
    while (s.size() % 3 != 0)
    {
        s = "0" + s;
    }

    for (int i = 0; i < s.size(); i += 3)
    {
        tmp = s.substr(i, 3);
        if (tmp == "000")
        {
            ans += '0';
        }
        else if (tmp == "001")
        {
            ans += '1';
        }
        else if (tmp == "010")
        {
            ans += '2';
        }
        else if (tmp == "011")
        {
            ans += '3';
        }
        else if (tmp == "100")
        {
            ans += '4';
        }
        else if (tmp == "101")
        {
            ans += '5';
        }
        else if (tmp == "110")
        {
            ans += '6';
        }
        else if (tmp == "111")
        {
            ans += '7';
        }
    }

    cout << ans;
}