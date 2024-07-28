#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int ans = 10;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] == a[i])
        {
            ans += 5;
        }
        else
        {
            ans += 10;
        }
    }
    cout << ans;
}