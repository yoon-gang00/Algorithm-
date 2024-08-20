#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    while (1)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            return 0;
        }
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        vector<bool> a(k);
        fill(a.begin(), a.begin() + 6, true);
        do
        {
            for (int i = 0; i < k; ++i)
            {
                if (a[i])
                {
                    cout << v[i] << " ";
                }
            }
            cout << "\n";
        } while (
            prev_permutation(a.begin(), a.end()));
        cout << "\n";
    }
}