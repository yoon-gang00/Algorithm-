#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 1)
    {
        return 1;
    }
    int dp[100001];
    dp[1] = 3;
    dp[2] = 7;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] * 2 + dp[i - 2];
        dp[i] = dp[i]%9901;
    }
    cout << dp[n]<< endl;
    return 0;
}