#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v[0] >= 0)
    {
        cout << v[0] << " " << v[1] << "\n";
        return 0;
    }
    else if (v[n - 1] <= 0)
    {
        cout << v[n - 2] << " " << v[n - 1] << "\n";
        return 0;
    }

    long long x = 0, y = 0;
    long long ans = 999999999;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        long long sum = v[left] + v[right];
        if (abs(sum) < ans)
        {
            ans = abs(sum);
            x = v[left];
            y = v[right];
        }
        if (sum < 0)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << x << " " << y << "\n";
}