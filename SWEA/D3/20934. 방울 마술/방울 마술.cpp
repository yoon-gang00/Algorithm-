#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int ans;
        string s;
        int k;
        cin >> s >> k;
        if (s == ".o.")
        {
            ans = 1;
        }
        else if (s == "o..")
        {
            ans = 0;
        }
        else if (s == "..o")
        {
            ans = 2;
        }
        for (int j = 0; j < k; j++)
        {
            if (s == ".o.")
            {
                ans = 0;
                s = "o..";
            }
            else if (s == "o..")
            {
                ans = 1;
                s = ".o.";
            }
            else if (s == "..o")
            {
                ans = 1;
                s = ".o.";
            }
        }

        cout << "#" << i << " " << ans << "\n";
    }
}