#include <iostream>
#include <string>
using namespace std;
int countVol(string s)
{
    int count = 0;
    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "#")
        {
            break;
        }
        int cnt = countVol(s);
        cout << cnt << "\n";
    }
}
