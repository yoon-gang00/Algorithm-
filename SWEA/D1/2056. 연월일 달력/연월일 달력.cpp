#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string ans="-1";
        string s;
        cin >> s;
        int m = stoi(s.substr(4, 2));
        int d = stoi(s.substr(6));
        if (m >= 1 && m <= 12)
        {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                if (d <= 31)
                {
                    ans = s.substr(0, 4) + "/" + s.substr(4, 2) + "/" + s.substr(6, 2);
                }
                else
                {
                    ans = "-1";
                }
            }
            else if (m == 2)
            {
                if (d <= 28)
                {
                    ans = s.substr(0, 4) + "/" + s.substr(4, 2) + "/" + s.substr(6, 2);
                }
                else
                {
                    ans = "-1";
                }
            }
            else if(  m == 4 || m == 6 || m == 9 || m == 11 )
            {
                if (d <= 30)
                {
                    ans = s.substr(0, 4) + "/" + s.substr(4, 2) + "/" + s.substr(6, 2);
                }
                else
                {
                    ans = "-1";
                }
            }
            else{
                ans ="-1";
            }
        }
        cout << "#" << i << " " << ans << "\n";
    }
}