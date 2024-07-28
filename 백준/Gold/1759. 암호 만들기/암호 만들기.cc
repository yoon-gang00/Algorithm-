#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void combi(const vector<char> &v, string s, int index, int l)
{
    if (s.length() == l)
    {
        int vol = 0, con = 0;
        for (char c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vol++;
            }
            else
            {
                con++;
            }
        }
        if (vol >= 1 && con >= 2)
        {
            cout << s << endl;
        }
        return;
    }
    for (int i = index; i < v.size(); i++)
    {
        combi(v, s + v[i], i + 1, l);
    }
}
int main()
{
    int l, c;
    cin >> l >> c;
    vector<char> v(c);
    for (size_t i = 0; i < c; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    combi(v, "", 0, l);
}